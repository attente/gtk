#ifndef __GDK_MIR_CURSOR_H__
#define __GDK_MIR_CURSOR_H__

#include "gdkcursorprivate.h"

G_BEGIN_DECLS

#define GDK_TYPE_MIR_CURSOR gdk_mir_cursor_get_type ()

G_DECLARE_FINAL_TYPE (GdkMirCursor, gdk_mir_cursor, GDK, MIR_CURSOR, GdkCursor)

GdkCursor * gdk_mir_cursor_new (void);

G_END_DECLS

#endif /* __GDK_MIR_CURSOR_H__ */
