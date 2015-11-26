/* GDK - The GIMP Drawing Kit
 * Copyright (C) 2015 Red Hat
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Carlos Garnacho <carlosg@gnome.org>
 */

#include "config.h"

#include <glib-object.h>
#include "gdkdevice.h"
#include "gdkseatprivate.h"
#include "gdkdeviceprivate.h"
#include "gdkintl.h"

/**
 * SECTION:gdkseat
 * @Short_description: Object representing an user seat
 * @Title: GdkSeat
 * @See_also: #GdkDisplay, #GdkDevice
 *
 * The #GdkSeat object represents a collection of input devices
 * that belong to an user.
 */

enum {
  DEVICE_ADDED,
  DEVICE_REMOVED,
  N_SIGNALS
};

static guint signals[N_SIGNALS] = { 0 };

G_DEFINE_ABSTRACT_TYPE (GdkSeat, gdk_seat, G_TYPE_OBJECT)

static void
gdk_seat_class_init (GdkSeatClass *klass)
{
  /**
   * GdkSeat::device-added:
   * @seat: the object on which the signal is emitted
   * @device: the newly added #GdkDevice.
   *
   * The ::device-added signal is emitted either when a new master
   * pointer is created, or when a slave (Hardware) input device
   * is plugged in.
   */
  signals [DEVICE_ADDED] =
    g_signal_new (P_("device-added"),
                  G_TYPE_FROM_CLASS (klass),
                  G_SIGNAL_RUN_LAST,
                  G_STRUCT_OFFSET (GdkSeatClass, device_added),
                  NULL, NULL,
                  g_cclosure_marshal_VOID__OBJECT,
                  G_TYPE_NONE, 1,
                  GDK_TYPE_DEVICE);

  /**
   * GdkSeat::device-removed:
   * @seat: the object on which the signal is emitted
   * @device: the just removed #GdkDevice.
   *
   * The ::device-removed signal is emitted either when a master
   * pointer is removed, or when a slave (Hardware) input device
   * is unplugged.
   */
  signals [DEVICE_REMOVED] =
    g_signal_new (P_("device-removed"),
                  G_TYPE_FROM_CLASS (klass),
                  G_SIGNAL_RUN_LAST,
                  G_STRUCT_OFFSET (GdkSeatClass, device_removed),
                  NULL, NULL,
                  g_cclosure_marshal_VOID__OBJECT,
                  G_TYPE_NONE, 1,
                  GDK_TYPE_DEVICE);
}

static void
gdk_seat_init (GdkSeat *seat)
{
}

/**
 * gdk_seat_get_capabilities:
 * @seat: a #GdkSeat
 *
 * Returns the capabilities this #GdkSeat currently has.
 *
 * Returns: the seat capabilities
 *
 * Since: 3.20
 **/
GdkSeatCapabilities
gdk_seat_get_capabilities (GdkSeat *seat)
{
  GdkSeatClass *seat_class;

  g_return_val_if_fail (GDK_IS_SEAT (seat), GDK_SEAT_CAPABILITY_NONE);

  seat_class = GDK_SEAT_GET_CLASS (seat);
  return seat_class->get_capabilities (seat);
}

/**
 * gdk_seat_grab:
 * @seat: a #GdkSeat
 * @window: the #GdkWindow which will own the grab
 * @capabilities: capabilities that will be grabbed
 * @owner_events: if %FALSE then all device events are reported with respect to
 *                @window and are only reported if selected by @event_mask. If
 *                %TRUE then pointer events for this application are reported
 *                as normal, but pointer events outside this application are
 *                reported with respect to @window and only if selected by
 *                @event_mask. In either mode, unreported events are discarded.
 * @cursor: (allow-none): the cursor to display while the grab is active. If
 *          this is %NULL then the normal cursors are used for
 *          @window and its descendants, and the cursor for @window is used
 *          elsewhere.
 * @event: (allow-none): the event that is triggering the grab, or %NULL if none
 *         is available.
 * @prepare_func: function to prepare the window to be grabbed
 * @prepare_func_data: user data to pass to @prepare_func
 *
 * Grabs the seat so that all events corresponding to the given @capabilities
 * are passed to this application until the seat is ungrabbed with gdk_seat_ungrab(),
 * or the window becomes hidden. This overrides any previous grab on the
 * seat by this client.
 *
 * As a rule of thumb, if a grab is desired over %GDK_SEAT_CAPABILITY_POINTER,
 * all other "pointing" capabilities (eg. %GDK_SEAT_CAPABILITY_TOUCH) should
 * be grabbed too, so the user is able to interact with all of those while
 * the grab holds.
 *
 * Grabs are used for operations which need complete control over the
 * events corresponding to the given capabilities. For example in GTK+ this
 * is used for Drag and Drop operations, popup menus and such.
 *
 * Note that if the event mask of a #GdkWindow has selected both button press
 * and button release events, or touch begin and touch end, then a press event
 * will cause an automatic grab until the button is released, equivalent to a
 * grab on the window with @owner_events set to %TRUE. This performed as most
 * applications expect to receive presses and releases in pairs.
 *
 * If you set up anything at the time you take the grab that needs to be
 * cleaned up when the grab ends, you should handle the #GdkEventGrabBroken
 * events that are emitted when the grab ends unvoluntarily.
 *
 * Returns: %GDK_GRAB_SUCCESS if the grab was successful.
 *
 * Since: 3.20
 **/
GdkGrabStatus
gdk_seat_grab (GdkSeat                *seat,
               GdkWindow              *window,
               GdkSeatCapabilities     capabilities,
               gboolean                owner_events,
               GdkCursor              *cursor,
               const GdkEvent         *event,
               GdkSeatGrabPrepareFunc  prepare_func,
               gpointer                prepare_func_data)
{
  GdkSeatClass *seat_class;

  g_return_val_if_fail (GDK_IS_SEAT (seat), GDK_GRAB_FAILED);
  g_return_val_if_fail (GDK_IS_WINDOW (window), GDK_GRAB_FAILED);

  capabilities &= GDK_SEAT_CAPABILITY_ALL;
  g_return_val_if_fail (capabilities != GDK_SEAT_CAPABILITY_NONE, GDK_GRAB_FAILED);

  seat_class = GDK_SEAT_GET_CLASS (seat);

  return seat_class->grab (seat, window, capabilities, owner_events, cursor,
                           event, prepare_func, prepare_func_data);
}

void
gdk_seat_ungrab (GdkSeat *seat)
{
  GdkSeatClass *seat_class;

  g_return_if_fail (GDK_IS_SEAT (seat));

  seat_class = GDK_SEAT_GET_CLASS (seat);
  return seat_class->ungrab (seat);
}

/**
 * gdk_seat_get_slaves:
 * @seat: a #GdkSeat
 * @capabilities: capabilities to get devices for
 *
 * Returns the slave devices that match the given capabilities.
 *
 * Returns: (transfer container): A list of #GdkDevices. The list
 *          must be freed with g_list_free(), the elements are owned
 *          by GDK and must not be freed.
 **/
GList *
gdk_seat_get_slaves (GdkSeat             *seat,
                     GdkSeatCapabilities  capabilities)
{
  GdkSeatClass *seat_class;

  g_return_val_if_fail (GDK_IS_SEAT (seat), NULL);

  seat_class = GDK_SEAT_GET_CLASS (seat);
  return seat_class->get_slaves (seat, capabilities);
}

/**
 * gdk_seat_get_pointer:
 * @seat: a #GdkSeat
 *
 * Returns the master device that routes pointer events.
 *
 * Returns: a master #GdkDevice with pointer capabilities.
 **/
GdkDevice *
gdk_seat_get_pointer (GdkSeat *seat)
{
  GdkSeatClass *seat_class;

  g_return_val_if_fail (GDK_IS_SEAT (seat), NULL);

  seat_class = GDK_SEAT_GET_CLASS (seat);
  return seat_class->get_master (seat, GDK_SEAT_CAPABILITY_POINTER);
}

/**
 * gdk_seat_get_keyboard:
 * @seat: a #GdkSeat
 *
 * Returns the master device that routes keyboard events.
 *
 * Returns: a master #GdkDevice with keyboard capabilities
 *
 * Since: 3.20
 **/
GdkDevice *
gdk_seat_get_keyboard (GdkSeat *seat)
{
  GdkSeatClass *seat_class;

  g_return_val_if_fail (GDK_IS_SEAT (seat), NULL);

  seat_class = GDK_SEAT_GET_CLASS (seat);
  return seat_class->get_master (seat, GDK_SEAT_CAPABILITY_KEYBOARD);
}

void
gdk_seat_device_added (GdkSeat   *seat,
                       GdkDevice *device)
{
  gdk_device_set_seat (device, seat);
  g_signal_emit (seat, signals[DEVICE_ADDED], 0, device);
}

void
gdk_seat_device_removed (GdkSeat   *seat,
                         GdkDevice *device)
{
  gdk_device_set_seat (device, NULL);
  g_signal_emit (seat, signals[DEVICE_REMOVED], 0, device);
}
