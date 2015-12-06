#ifndef __GDK_MIR_SCREEN_H__
#define __GDK_MIR_SCREEN_H__

#include "gdkscreenprivate.h"

G_BEGIN_DECLS

#define GDK_TYPE_MIR_SCREEN gdk_mir_screen_get_type ()

G_DECLARE_FINAL_TYPE (GdkMirScreen, gdk_mir_screen, GDK, MIR_SCREEN, GdkScreen)

GdkScreen * gdk_mir_screen_new (void);

G_END_DECLS

#endif /* __GDK_MIR_SCREEN_H__ */
