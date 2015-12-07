#include "gdk.h"
#include "gdkscreen-mir.h"
#include "gdkwindow-mir.h"
#include "gdkwindowimpl-mir.h"

struct _GdkMirScreen
{
  GdkScreen parent_instance;

  GdkDisplay *display;
  GdkWindow *root_window;
};

G_DEFINE_TYPE (GdkMirScreen, gdk_mir_screen, GDK_TYPE_SCREEN)

static void
gdk_mir_screen_dispose (GObject *object)
{
  GdkMirScreen *self = GDK_MIR_SCREEN (object);

  g_clear_object (&self->root_window);

  gdk_mir_screen_set_display (self, NULL);

  G_OBJECT_CLASS (gdk_mir_screen_parent_class)->dispose (object);
}

static GdkDisplay *
gdk_mir_screen_get_display (GdkScreen *screen)
{
  return GDK_MIR_SCREEN (screen)->display;
}

static gint
gdk_mir_screen_get_width (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_height (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_width_mm (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_height_mm (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_number (GdkScreen *screen)
{
  /* TODO: get number */
  return 0;
}

static GdkWindow *
gdk_mir_screen_get_root_window (GdkScreen *screen)
{
  GdkMirScreen *self = GDK_MIR_SCREEN (screen);

  if (self->root_window)
    return self->root_window;

  self->root_window = gdk_mir_window_new ();
  self->root_window->window_type = GDK_WINDOW_ROOT;
  self->root_window->impl_window = self->root_window;
  self->root_window->impl = gdk_mir_window_impl_new ();

  return self->root_window;
}

static gint
gdk_mir_screen_get_n_monitors (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_primary_monitor (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_monitor_width_mm (GdkScreen *screen,
                                     gint       monitor_num)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_monitor_height_mm (GdkScreen *screen,
                                      gint       monitor_num)
{
  g_error ("%s", G_STRFUNC);
}

static gchar *
gdk_mir_screen_get_monitor_plug_name (GdkScreen *screen,
                                      gint       monitor_num)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_screen_get_monitor_geometry (GdkScreen    *screen,
                                     gint          monitor_num,
                                     GdkRectangle *dest)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_screen_get_monitor_workarea (GdkScreen    *screen,
                                     gint          monitor_num,
                                     GdkRectangle *dest)
{
  g_error ("%s", G_STRFUNC);
}

static GList *
gdk_mir_screen_list_visuals (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static GdkVisual *
gdk_mir_screen_get_system_visual (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static GdkVisual *
gdk_mir_screen_get_rgba_visual (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_screen_is_composited (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static gchar *
gdk_mir_screen_make_display_name (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static GdkWindow *
gdk_mir_screen_get_active_window (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static GList *
gdk_mir_screen_get_window_stack (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_screen_broadcast_client_message (GdkScreen *screen,
                                         GdkEvent  *event)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_screen_get_setting (GdkScreen   *screen,
                            const gchar *name,
                            GValue      *value)
{
  /* TODO: get setting */
  return FALSE;
}

static gint
gdk_mir_screen_visual_get_best_depth (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static GdkVisualType
gdk_mir_screen_visual_get_best_type (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static GdkVisual *
gdk_mir_screen_visual_get_best (GdkScreen *screen)
{
  g_error ("%s", G_STRFUNC);
}

static GdkVisual *
gdk_mir_screen_visual_get_best_with_depth (GdkScreen *screen,
                                           gint       depth)
{
  g_error ("%s", G_STRFUNC);
}

static GdkVisual *
gdk_mir_screen_visual_get_best_with_type (GdkScreen     *screen,
                                          GdkVisualType  visual_type)
{
  g_error ("%s", G_STRFUNC);
}

static GdkVisual *
gdk_mir_screen_visual_get_best_with_both (GdkScreen     *screen,
                                          gint           depth,
                                          GdkVisualType  visual_type)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_screen_query_depths (GdkScreen  *screen,
                             gint      **depths,
                             gint       *count)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_screen_query_visual_types (GdkScreen      *screen,
                                   GdkVisualType **visual_types,
                                   gint           *count)
{
  g_error ("%s", G_STRFUNC);
}

static gint
gdk_mir_screen_get_monitor_scale_factor (GdkScreen *screen,
                                         gint       monitor_num)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_screen_class_init (GdkMirScreenClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);
  GdkScreenClass *screen_class = GDK_SCREEN_CLASS (klass);

  object_class->dispose = gdk_mir_screen_dispose;

  screen_class->get_display = gdk_mir_screen_get_display;
  screen_class->get_width = gdk_mir_screen_get_width;
  screen_class->get_height = gdk_mir_screen_get_height;
  screen_class->get_width_mm = gdk_mir_screen_get_width_mm;
  screen_class->get_height_mm = gdk_mir_screen_get_height_mm;
  screen_class->get_number = gdk_mir_screen_get_number;
  screen_class->get_root_window = gdk_mir_screen_get_root_window;
  screen_class->get_n_monitors = gdk_mir_screen_get_n_monitors;
  screen_class->get_primary_monitor = gdk_mir_screen_get_primary_monitor;
  screen_class->get_monitor_width_mm = gdk_mir_screen_get_monitor_width_mm;
  screen_class->get_monitor_height_mm = gdk_mir_screen_get_monitor_height_mm;
  screen_class->get_monitor_plug_name = gdk_mir_screen_get_monitor_plug_name;
  screen_class->get_monitor_geometry = gdk_mir_screen_get_monitor_geometry;
  screen_class->get_monitor_workarea = gdk_mir_screen_get_monitor_workarea;
  screen_class->list_visuals = gdk_mir_screen_list_visuals;
  screen_class->get_system_visual = gdk_mir_screen_get_system_visual;
  screen_class->get_rgba_visual = gdk_mir_screen_get_rgba_visual;
  screen_class->is_composited = gdk_mir_screen_is_composited;
  screen_class->make_display_name = gdk_mir_screen_make_display_name;
  screen_class->get_active_window = gdk_mir_screen_get_active_window;
  screen_class->get_window_stack = gdk_mir_screen_get_window_stack;
  screen_class->broadcast_client_message = gdk_mir_screen_broadcast_client_message;
  screen_class->get_setting = gdk_mir_screen_get_setting;
  screen_class->visual_get_best_depth = gdk_mir_screen_visual_get_best_depth;
  screen_class->visual_get_best_type = gdk_mir_screen_visual_get_best_type;
  screen_class->visual_get_best = gdk_mir_screen_visual_get_best;
  screen_class->visual_get_best_with_depth = gdk_mir_screen_visual_get_best_with_depth;
  screen_class->visual_get_best_with_type = gdk_mir_screen_visual_get_best_with_type;
  screen_class->visual_get_best_with_both = gdk_mir_screen_visual_get_best_with_both;
  screen_class->query_depths = gdk_mir_screen_query_depths;
  screen_class->query_visual_types = gdk_mir_screen_query_visual_types;
  screen_class->get_monitor_scale_factor = gdk_mir_screen_get_monitor_scale_factor;
}

static void
gdk_mir_screen_init (GdkMirScreen *self)
{
}

GdkScreen *
gdk_mir_screen_new (void)
{
  return g_object_new (GDK_TYPE_MIR_SCREEN, NULL);
}

void
gdk_mir_screen_set_display (GdkMirScreen *self,
                            GdkDisplay   *display)
{
  if (display == self->display)
    return;

  g_clear_object (&self->display);

  if (display)
    self->display = g_object_ref (display);
}
