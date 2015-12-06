#include "gdkdisplay-mir.h"
#include "gdkprivate-mir.h"

struct _GdkMirDisplay
{
  GdkDisplay parent_instance;
};

G_DEFINE_TYPE (GdkMirDisplay, gdk_mir_display, GDK_TYPE_DISPLAY)

static const gchar *
gdk_mir_display_get_name (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static GdkScreen *
gdk_mir_display_get_default_screen (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_beep (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_sync (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_flush (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_has_pending (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_queue_events (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_make_default (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static GdkWindow *
gdk_mir_display_get_default_group (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_supports_selection_notification (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_request_selection_notification (GdkDisplay *display,
                                                GdkAtom     selection)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_supports_shapes (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_supports_input_shapes (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_supports_composite (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_supports_cursor_alpha (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_supports_cursor_color (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_supports_clipboard_persistence (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_store_clipboard (GdkDisplay    *display,
                                 GdkWindow     *clipboard_window,
                                 guint32        time_,
                                 const GdkAtom *targets,
                                 gint           n_targets)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_get_default_cursor_size (GdkDisplay *display,
                                         guint      *width,
                                         guint      *height)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_get_maximal_cursor_size (GdkDisplay *display,
                                         guint      *width,
                                         guint      *height)
{
  g_error ("%s", G_STRFUNC);
}

static GdkCursor *
gdk_mir_display_get_cursor_for_type (GdkDisplay    *display,
                                     GdkCursorType  type)
{
  g_error ("%s", G_STRFUNC);
}

static GdkCursor *
gdk_mir_display_get_cursor_for_name (GdkDisplay  *display,
                                     const gchar *name)
{
  g_error ("%s", G_STRFUNC);
}

static GdkCursor *
gdk_mir_display_get_cursor_for_surface (GdkDisplay      *display,
                                        cairo_surface_t *surface,
                                        gdouble          x,
                                        gdouble          y)
{
  g_error ("%s", G_STRFUNC);
}

static GList *
gdk_mir_display_list_devices (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static GdkAppLaunchContext *
gdk_mir_display_get_app_launch_context (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_before_process_all_updates (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_after_process_all_updates (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gulong
gdk_mir_display_get_next_serial (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_notify_startup_complete (GdkDisplay  *display,
                                         const gchar *startup_id)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_event_data_copy (GdkDisplay     *display,
                                 const GdkEvent *event,
                                 GdkEvent       *new_event)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_event_data_free (GdkDisplay *display,
                                 GdkEvent   *event)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_create_window_impl (GdkDisplay    *display,
                                    GdkWindow     *window,
                                    GdkWindow     *real_parent,
                                    GdkScreen     *screen,
                                    GdkEventMask   event_mask,
                                    GdkWindowAttr *attributes,
                                    gint           attributes_mask)
{
  g_error ("%s", G_STRFUNC);
}

static GdkKeymap *
gdk_mir_display_get_keymap (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_push_error_trap (GdkDisplay *display)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_display_pop_error_trap (GdkDisplay *display,
                                gboolean    ignore)
{
  g_error ("%s", G_STRFUNC);
}

static GdkWindow *
gdk_mir_display_get_selection_owner (GdkDisplay *display,
                                     GdkAtom     selection)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_set_selection_owner (GdkDisplay *display,
                                     GdkWindow  *owner,
                                     GdkAtom     selection,
                                     guint32     time,
                                     gboolean    send_event)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_send_selection_notify (GdkDisplay *display,
                                       GdkWindow  *requestor,
                                       GdkAtom     selection,
                                       GdkAtom     target,
                                       GdkAtom     property,
                                       guint32     time)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_display_get_selection_property (GdkDisplay  *display,
                                        GdkWindow   *requestor,
                                        guchar     **data,
                                        GdkAtom     *type,
                                        gint        *format)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_convert_selection (GdkDisplay *display,
                                   GdkWindow  *requestor,
                                   GdkAtom     selection,
                                   GdkAtom     target,
                                   guint32     time)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_display_text_property_to_utf8_list (GdkDisplay     *display,
                                            GdkAtom         encoding,
                                            gint            format,
                                            const guchar   *text,
                                            gint            length,
                                            gchar        ***list)
{
  g_error ("%s", G_STRFUNC);
}

static gchar *
gdk_mir_display_utf8_to_string_target (GdkDisplay  *display,
                                       const gchar *text)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_display_make_gl_context_current (GdkDisplay   *display,
                                         GdkGLContext *context)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_display_class_init (GdkMirDisplayClass *klass)
{
  GdkDisplayClass *display_class = GDK_DISPLAY_CLASS (klass);

  display_class->window_type = GDK_TYPE_WINDOW;
  display_class->get_name = gdk_mir_display_get_name;
  display_class->get_default_screen = gdk_mir_display_get_default_screen;
  display_class->beep = gdk_mir_display_beep;
  display_class->sync = gdk_mir_display_sync;
  display_class->flush = gdk_mir_display_flush;
  display_class->has_pending = gdk_mir_display_has_pending;
  display_class->queue_events = gdk_mir_display_queue_events;
  display_class->make_default = gdk_mir_display_make_default;
  display_class->get_default_group = gdk_mir_display_get_default_group;
  display_class->supports_selection_notification = gdk_mir_display_supports_selection_notification;
  display_class->request_selection_notification = gdk_mir_display_request_selection_notification;
  display_class->supports_shapes = gdk_mir_display_supports_shapes;
  display_class->supports_input_shapes = gdk_mir_display_supports_input_shapes;
  display_class->supports_composite = gdk_mir_display_supports_composite;
  display_class->supports_cursor_alpha = gdk_mir_display_supports_cursor_alpha;
  display_class->supports_cursor_color = gdk_mir_display_supports_cursor_color;
  display_class->supports_clipboard_persistence = gdk_mir_display_supports_clipboard_persistence;
  display_class->store_clipboard = gdk_mir_display_store_clipboard;
  display_class->get_default_cursor_size = gdk_mir_display_get_default_cursor_size;
  display_class->get_maximal_cursor_size = gdk_mir_display_get_maximal_cursor_size;
  display_class->get_cursor_for_type = gdk_mir_display_get_cursor_for_type;
  display_class->get_cursor_for_name = gdk_mir_display_get_cursor_for_name;
  display_class->get_cursor_for_surface = gdk_mir_display_get_cursor_for_surface;
  display_class->list_devices = gdk_mir_display_list_devices;
  display_class->get_app_launch_context = gdk_mir_display_get_app_launch_context;
  display_class->before_process_all_updates = gdk_mir_display_before_process_all_updates;
  display_class->after_process_all_updates = gdk_mir_display_after_process_all_updates;
  display_class->get_next_serial = gdk_mir_display_get_next_serial;
  display_class->notify_startup_complete = gdk_mir_display_notify_startup_complete;
  display_class->event_data_copy = gdk_mir_display_event_data_copy;
  display_class->event_data_free = gdk_mir_display_event_data_free;
  display_class->create_window_impl = gdk_mir_display_create_window_impl;
  display_class->get_keymap = gdk_mir_display_get_keymap;
  display_class->push_error_trap = gdk_mir_display_push_error_trap;
  display_class->pop_error_trap = gdk_mir_display_pop_error_trap;
  display_class->get_selection_owner = gdk_mir_display_get_selection_owner;
  display_class->set_selection_owner = gdk_mir_display_set_selection_owner;
  display_class->send_selection_notify = gdk_mir_display_send_selection_notify;
  display_class->get_selection_property = gdk_mir_display_get_selection_property;
  display_class->convert_selection = gdk_mir_display_convert_selection;
  display_class->text_property_to_utf8_list = gdk_mir_display_text_property_to_utf8_list;
  display_class->utf8_to_string_target = gdk_mir_display_utf8_to_string_target;
  display_class->make_gl_context_current = gdk_mir_display_make_gl_context_current;
}

static void
gdk_mir_display_init (GdkMirDisplay *self)
{
}

GdkDisplay *
gdk_mir_display_new (void)
{
  return g_object_new (GDK_TYPE_MIR_DISPLAY, NULL);
}

GdkDisplay *
_gdk_mir_display_open (const char *name)
{
  return NULL;
}
