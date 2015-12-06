#include "gdkwindow-mir.h"

struct _GdkMirWindow
{
  GdkWindow parent_instance;
};

G_DEFINE_TYPE (GdkMirWindow, gdk_mir_window, GDK_TYPE_WINDOW)

static void
gdk_mir_window_class_init (GdkMirWindowClass *klass)
{
}

static void
gdk_mir_window_init (GdkMirWindow *self)
{
}

GdkWindow *
gdk_mir_window_new (void)
{
  return g_object_new (GDK_TYPE_MIR_WINDOW, NULL);
}
