#ifndef __GDK_MIR_DISPLAY_H__
#define __GDK_MIR_DISPLAY_H__

#include "gdkdisplayprivate.h"

G_BEGIN_DECLS

#define GDK_TYPE_MIR_DISPLAY gdk_mir_display_get_type ()

G_DECLARE_FINAL_TYPE (GdkMirDisplay, gdk_mir_display, GDK, MIR_DISPLAY, GdkDisplay)

GdkDisplay * gdk_mir_display_new (void);

G_END_DECLS

#endif /* __GDK_MIR_DISPLAY_H__ */
