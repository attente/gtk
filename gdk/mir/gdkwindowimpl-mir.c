#include "gdkwindowimpl-mir.h"

struct _GdkMirWindowImpl
{
  GdkWindowImpl parent_instance;
};

G_DEFINE_TYPE (GdkMirWindowImpl, gdk_mir_window_impl, GDK_TYPE_WINDOW_IMPL)

static cairo_surface_t *
gdk_mir_window_impl_ref_cairo_surface (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static cairo_surface_t *
gdk_mir_window_impl_create_similar_image_surface (GdkWindow      *window,
                                                  cairo_format_t  format,
                                                  int             width,
                                                  int             height)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_show (GdkWindow *window,
                          gboolean   already_mapped)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_hide (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_withdraw (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_raise (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_lower (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_restack_under (GdkWindow *window,
                                   GList     *native_siblings)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_restack_toplevel (GdkWindow *window,
                                      GdkWindow *sibling,
                                      gboolean   above)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_move_resize (GdkWindow *window,
                                 gboolean   with_move,
                                 gint       x,
                                 gint       y,
                                 gint       width,
                                 gint       height)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_background (GdkWindow       *window,
                                    cairo_pattern_t *pattern)
{
  g_error ("%s", G_STRFUNC);
}

static GdkEventMask
gdk_mir_window_impl_get_events (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_events (GdkWindow    *window,
                                GdkEventMask  event_mask)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_reparent (GdkWindow *window,
                              GdkWindow *new_parent,
                              gint       x,
                              gint       y)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_device_cursor (GdkWindow *window,
                                       GdkDevice *device,
                                       GdkCursor *cursor)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_get_geometry (GdkWindow *window,
                                  gint      *x,
                                  gint      *y,
                                  gint      *width,
                                  gint      *height)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_get_root_coords (GdkWindow *window,
                                     gint       x,
                                     gint       y,
                                     gint      *root_x,
                                     gint      *root_y)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_get_device_state (GdkWindow       *window,
                                      GdkDevice       *device,
                                      gdouble         *x,
                                      gdouble         *y,
                                      GdkModifierType *mask)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_begin_paint (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_end_paint (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static cairo_region_t *
gdk_mir_window_impl_get_shape (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static cairo_region_t *
gdk_mir_window_impl_get_input_shape (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_shape_combine_region (GdkWindow            *window,
                                          const cairo_region_t *shape_region,
                                          gint                  offset_x,
                                          gint                  offset_y)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_input_shape_combine_region (GdkWindow            *window,
                                                const cairo_region_t *shape_region,
                                                gint                  offset_x,
                                                gint                  offset_y)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_queue_antiexpose (GdkWindow      *window,
                                      cairo_region_t *update_area)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_destroy (GdkWindow *window,
                             gboolean   recursing,
                             gboolean   foreign_destroy)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_destroy_foreign (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_beep (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_focus (GdkWindow *window,
                           guint32    timestamp)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_type_hint (GdkWindow         *window,
                                   GdkWindowTypeHint  hint)
{
  g_error ("%s", G_STRFUNC);
}

static GdkWindowTypeHint
gdk_mir_window_impl_get_type_hint (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_modal_hint (GdkWindow *window,
                                    gboolean   modal)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_skip_taskbar_hint (GdkWindow *window,
                                           gboolean   skips_taskbar)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_skip_pager_hint (GdkWindow *window,
                                         gboolean   skips_pager)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_urgency_hint (GdkWindow *window,
                                      gboolean   urgent)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_geometry_hints (GdkWindow         *window,
                                        const GdkGeometry *geometry,
                                        GdkWindowHints     geom_mask)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_title (GdkWindow   *window,
                               const gchar *title)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_role (GdkWindow   *window,
                              const gchar *role)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_startup_id (GdkWindow   *window,
                                    const gchar *startup_id)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_transient_for (GdkWindow *window,
                                       GdkWindow *parent)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_get_frame_extents (GdkWindow    *window,
                                       GdkRectangle *rect)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_override_redirect (GdkWindow *window,
                                           gboolean   override_redirect)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_accept_focus (GdkWindow *window,
                                      gboolean   accept_focus)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_focus_on_map (GdkWindow *window,
                                      gboolean   focus_on_map)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_icon_list (GdkWindow *window,
                                   GList     *pixbufs)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_icon_name (GdkWindow   *window,
                                   const gchar *name)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_iconify (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_deiconify (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_stick (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_unstick (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_maximize (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_unmaximize (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_fullscreen (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_fullscreen_on_monitor (GdkWindow *window,
                                           gint       monitor)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_apply_fullscreen_mode (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_unfullscreen (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_keep_above (GdkWindow *window,
                                    gboolean   setting)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_keep_below (GdkWindow *window,
                                    gboolean   setting)
{
  g_error ("%s", G_STRFUNC);
}

static GdkWindow *
gdk_mir_window_impl_get_group (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_group (GdkWindow *window,
                               GdkWindow *leader)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_decorations (GdkWindow       *window,
                                     GdkWMDecoration  decorations)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_get_decorations (GdkWindow       *window,
                                     GdkWMDecoration *decorations)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_functions (GdkWindow     *window,
                                   GdkWMFunction  functions)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_begin_resize_drag (GdkWindow     *window,
                                       GdkWindowEdge  edge,
                                       GdkDevice     *device,
                                       gint           button,
                                       gint           root_x,
                                       gint           root_y,
                                       guint32        timestamp)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_begin_move_drag (GdkWindow *window,
                                     GdkDevice *device,
                                     gint       button,
                                     gint       root_x,
                                     gint       root_y,
                                     guint32    timestamp)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_enable_synchronized_configure (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_configure_finished (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_opacity (GdkWindow *window,
                                 gdouble    opacity)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_composited (GdkWindow *window,
                                    gboolean   composited)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_destroy_notify (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static GdkDragProtocol
gdk_mir_window_impl_get_drag_protocol (GdkWindow  *window,
                                       GdkWindow **target)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_register_dnd (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static GdkDragContext *
gdk_mir_window_impl_drag_begin (GdkWindow *window,
                                GdkDevice *device,
                                GList     *targets)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_process_updates_recurse (GdkWindow      *window,
                                             cairo_region_t *region)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_sync_rendering (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_simulate_key (GdkWindow       *window,
                                  gint             x,
                                  gint             y,
                                  guint            keyval,
                                  GdkModifierType  modifiers,
                                  GdkEventType     event_type)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_simulate_button (GdkWindow       *window,
                                     gint             x,
                                     gint             y,
                                     guint            button,
                                     GdkModifierType  modifiers,
                                     GdkEventType     event_type)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_get_property (GdkWindow  *window,
                                  GdkAtom     property,
                                  GdkAtom     type,
                                  gulong      offset,
                                  gulong      length,
                                  gint        pdelete,
                                  GdkAtom    *actual_type,
                                  gint       *actual_format,
                                  gint       *actual_length,
                                  guchar    **data)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_change_property (GdkWindow    *window,
                                     GdkAtom       property,
                                     GdkAtom       type,
                                     gint          format,
                                     GdkPropMode   mode,
                                     const guchar *data,
                                     gint          n_elements)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_delete_property (GdkWindow *window,
                                     GdkAtom    property)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_window_impl_get_scale_factor (GdkWindow *window)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_get_unscaled_size (GdkWindow *window,
                                       int       *unscaled_width,
                                       int       *unscaled_height)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_opaque_region (GdkWindow      *window,
                                       cairo_region_t *region)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_set_shadow_width (GdkWindow *window,
                                      gint       left,
                                      gint       right,
                                      gint       top,
                                      gint       bottom)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_show_window_menu (GdkWindow *window,
                                      GdkEvent  *event)
{
  g_error ("%s", G_STRFUNC);
}

static GdkGLContext *
gdk_mir_window_impl_create_gl_context (GdkWindow     *window,
                                       gboolean       attached,
                                       GdkGLContext  *share,
                                       GError       **error)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_window_impl_realize_gl_context (GdkWindow     *window,
                                        GdkGLContext  *context,
                                        GError       **error)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_invalidate_for_new_frame (GdkWindow      *window,
                                              cairo_region_t *update_area)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_window_impl_class_init (GdkMirWindowImplClass *klass)
{
  GdkWindowImplClass *window_impl_class = GDK_WINDOW_IMPL_CLASS (klass);

  window_impl_class->ref_cairo_surface = gdk_mir_window_impl_ref_cairo_surface;
  window_impl_class->create_similar_image_surface = gdk_mir_window_impl_create_similar_image_surface;
  window_impl_class->show = gdk_mir_window_impl_show;
  window_impl_class->hide = gdk_mir_window_impl_hide;
  window_impl_class->withdraw = gdk_mir_window_impl_withdraw;
  window_impl_class->raise = gdk_mir_window_impl_raise;
  window_impl_class->lower = gdk_mir_window_impl_lower;
  window_impl_class->restack_under = gdk_mir_window_impl_restack_under;
  window_impl_class->restack_toplevel = gdk_mir_window_impl_restack_toplevel;
  window_impl_class->move_resize = gdk_mir_window_impl_move_resize;
  window_impl_class->set_background = gdk_mir_window_impl_set_background;
  window_impl_class->get_events = gdk_mir_window_impl_get_events;
  window_impl_class->set_events = gdk_mir_window_impl_set_events;
  window_impl_class->reparent = gdk_mir_window_impl_reparent;
  window_impl_class->set_device_cursor = gdk_mir_window_impl_set_device_cursor;
  window_impl_class->get_geometry = gdk_mir_window_impl_get_geometry;
  window_impl_class->get_root_coords = gdk_mir_window_impl_get_root_coords;
  window_impl_class->get_device_state = gdk_mir_window_impl_get_device_state;
  window_impl_class->begin_paint = gdk_mir_window_impl_begin_paint;
  window_impl_class->end_paint = gdk_mir_window_impl_end_paint;
  window_impl_class->get_shape = gdk_mir_window_impl_get_shape;
  window_impl_class->get_input_shape = gdk_mir_window_impl_get_input_shape;
  window_impl_class->shape_combine_region = gdk_mir_window_impl_shape_combine_region;
  window_impl_class->input_shape_combine_region = gdk_mir_window_impl_input_shape_combine_region;
  window_impl_class->queue_antiexpose = gdk_mir_window_impl_queue_antiexpose;
  window_impl_class->destroy = gdk_mir_window_impl_destroy;
  window_impl_class->destroy_foreign = gdk_mir_window_impl_destroy_foreign;
  window_impl_class->beep = gdk_mir_window_impl_beep;
  window_impl_class->focus = gdk_mir_window_impl_focus;
  window_impl_class->set_type_hint = gdk_mir_window_impl_set_type_hint;
  window_impl_class->get_type_hint = gdk_mir_window_impl_get_type_hint;
  window_impl_class->set_modal_hint = gdk_mir_window_impl_set_modal_hint;
  window_impl_class->set_skip_taskbar_hint = gdk_mir_window_impl_set_skip_taskbar_hint;
  window_impl_class->set_skip_pager_hint = gdk_mir_window_impl_set_skip_pager_hint;
  window_impl_class->set_urgency_hint = gdk_mir_window_impl_set_urgency_hint;
  window_impl_class->set_geometry_hints = gdk_mir_window_impl_set_geometry_hints;
  window_impl_class->set_title = gdk_mir_window_impl_set_title;
  window_impl_class->set_role = gdk_mir_window_impl_set_role;
  window_impl_class->set_startup_id = gdk_mir_window_impl_set_startup_id;
  window_impl_class->set_transient_for = gdk_mir_window_impl_set_transient_for;
  window_impl_class->get_frame_extents = gdk_mir_window_impl_get_frame_extents;
  window_impl_class->set_override_redirect = gdk_mir_window_impl_set_override_redirect;
  window_impl_class->set_accept_focus = gdk_mir_window_impl_set_accept_focus;
  window_impl_class->set_focus_on_map = gdk_mir_window_impl_set_focus_on_map;
  window_impl_class->set_icon_list = gdk_mir_window_impl_set_icon_list;
  window_impl_class->set_icon_name = gdk_mir_window_impl_set_icon_name;
  window_impl_class->iconify = gdk_mir_window_impl_iconify;
  window_impl_class->deiconify = gdk_mir_window_impl_deiconify;
  window_impl_class->stick = gdk_mir_window_impl_stick;
  window_impl_class->unstick = gdk_mir_window_impl_unstick;
  window_impl_class->maximize = gdk_mir_window_impl_maximize;
  window_impl_class->unmaximize = gdk_mir_window_impl_unmaximize;
  window_impl_class->fullscreen = gdk_mir_window_impl_fullscreen;
  window_impl_class->fullscreen_on_monitor = gdk_mir_window_impl_fullscreen_on_monitor;
  window_impl_class->apply_fullscreen_mode = gdk_mir_window_impl_apply_fullscreen_mode;
  window_impl_class->unfullscreen = gdk_mir_window_impl_unfullscreen;
  window_impl_class->set_keep_above = gdk_mir_window_impl_set_keep_above;
  window_impl_class->set_keep_below = gdk_mir_window_impl_set_keep_below;
  window_impl_class->get_group = gdk_mir_window_impl_get_group;
  window_impl_class->set_group = gdk_mir_window_impl_set_group;
  window_impl_class->set_decorations = gdk_mir_window_impl_set_decorations;
  window_impl_class->get_decorations = gdk_mir_window_impl_get_decorations;
  window_impl_class->set_functions = gdk_mir_window_impl_set_functions;
  window_impl_class->begin_resize_drag = gdk_mir_window_impl_begin_resize_drag;
  window_impl_class->begin_move_drag = gdk_mir_window_impl_begin_move_drag;
  window_impl_class->enable_synchronized_configure = gdk_mir_window_impl_enable_synchronized_configure;
  window_impl_class->configure_finished = gdk_mir_window_impl_configure_finished;
  window_impl_class->set_opacity = gdk_mir_window_impl_set_opacity;
  window_impl_class->set_composited = gdk_mir_window_impl_set_composited;
  window_impl_class->destroy_notify = gdk_mir_window_impl_destroy_notify;
  window_impl_class->get_drag_protocol = gdk_mir_window_impl_get_drag_protocol;
  window_impl_class->register_dnd = gdk_mir_window_impl_register_dnd;
  window_impl_class->drag_begin = gdk_mir_window_impl_drag_begin;
  window_impl_class->process_updates_recurse = gdk_mir_window_impl_process_updates_recurse;
  window_impl_class->sync_rendering = gdk_mir_window_impl_sync_rendering;
  window_impl_class->simulate_key = gdk_mir_window_impl_simulate_key;
  window_impl_class->simulate_button = gdk_mir_window_impl_simulate_button;
  window_impl_class->get_property = gdk_mir_window_impl_get_property;
  window_impl_class->change_property = gdk_mir_window_impl_change_property;
  window_impl_class->delete_property = gdk_mir_window_impl_delete_property;
  window_impl_class->get_scale_factor = gdk_mir_window_impl_get_scale_factor;
  window_impl_class->get_unscaled_size = gdk_mir_window_impl_get_unscaled_size;
  window_impl_class->set_opaque_region = gdk_mir_window_impl_set_opaque_region;
  window_impl_class->set_shadow_width = gdk_mir_window_impl_set_shadow_width;
  window_impl_class->show_window_menu = gdk_mir_window_impl_show_window_menu;
  window_impl_class->create_gl_context = gdk_mir_window_impl_create_gl_context;
  window_impl_class->realize_gl_context = gdk_mir_window_impl_realize_gl_context;
  window_impl_class->invalidate_for_new_frame = gdk_mir_window_impl_invalidate_for_new_frame;
}

static void
gdk_mir_window_impl_init (GdkMirWindowImpl *self)
{
}

GdkWindowImpl *
gdk_mir_window_impl_new (void)
{
  return g_object_new (GDK_TYPE_MIR_WINDOW_IMPL, NULL);
}
