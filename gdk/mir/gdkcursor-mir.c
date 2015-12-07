#include "gdk.h"
#include "gdkcursor-mir.h"

struct _GdkMirCursor
{
  GdkCursor parent_instance;
};

G_DEFINE_TYPE (GdkMirCursor, gdk_mir_cursor, GDK_TYPE_CURSOR)

static cairo_surface_t *
gdk_mir_cursor_get_surface (GdkCursor *cursor,
                            gdouble   *x_hot,
                            gdouble   *y_hot)
{
  /* TODO: get surface */
  return NULL;
}

static void
gdk_mir_cursor_class_init (GdkMirCursorClass *klass)
{
  GdkCursorClass *cursor_class = GDK_CURSOR_CLASS (klass);

  cursor_class->get_surface = gdk_mir_cursor_get_surface;
}

static void
gdk_mir_cursor_init (GdkMirCursor *self)
{
}

GdkCursor *
gdk_mir_cursor_new (void)
{
  return g_object_new (GDK_TYPE_MIR_CURSOR, NULL);
}
