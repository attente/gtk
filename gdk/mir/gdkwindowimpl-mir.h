#ifndef __GDK_MIR_WINDOW_IMPL_H__
#define __GDK_MIR_WINDOW_IMPL_H__

#include "gdkwindowimpl.h"

G_BEGIN_DECLS

#define GDK_TYPE_MIR_WINDOW_IMPL gdk_mir_window_impl_get_type ()

G_DEFINE_AUTOPTR_CLEANUP_FUNC(GdkWindowImpl, g_object_unref)

G_DECLARE_FINAL_TYPE (GdkMirWindowImpl, gdk_mir_window_impl, GDK, MIR_WINDOW_IMPL, GdkWindowImpl)

GdkWindowImpl * gdk_mir_window_impl_new (void);

G_END_DECLS

#endif /* __GDK_MIR_WINDOW_IMPL_H__ */
