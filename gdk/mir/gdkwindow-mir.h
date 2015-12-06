#ifndef __GDK_MIR_WINDOW_H__
#define __GDK_MIR_WINDOW_H__

#include "gdkinternals.h"

G_BEGIN_DECLS

#define GDK_TYPE_MIR_WINDOW gdk_mir_window_get_type ()

G_DECLARE_FINAL_TYPE (GdkMirWindow, gdk_mir_window, GDK, MIR_WINDOW, GdkWindow)

GdkWindow * gdk_mir_window_new (void);

G_END_DECLS

#endif /* __GDK_MIR_WINDOW_H__ */
