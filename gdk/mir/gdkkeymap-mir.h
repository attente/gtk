#ifndef __GDK_MIR_KEYMAP_H__
#define __GDK_MIR_KEYMAP_H__

#include "gdkkeysprivate.h"

G_BEGIN_DECLS

#define GDK_TYPE_MIR_KEYMAP gdk_mir_keymap_get_type ()

G_DEFINE_AUTOPTR_CLEANUP_FUNC(GdkKeymap, g_object_unref)

G_DECLARE_FINAL_TYPE (GdkMirKeymap, gdk_mir_keymap, GDK, MIR_KEYMAP, GdkKeymap)

GdkKeymap * gdk_mir_keymap_new (void);

G_END_DECLS

#endif /* __GDK_MIR_KEYMAP_H__ */
