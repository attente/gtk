#include "gdk.h"
#include "gdkkeymap-mir.h"

struct _GdkMirKeymap
{
  GdkKeymap parent_instance;
};

G_DEFINE_TYPE (GdkMirKeymap, gdk_mir_keymap, GDK_TYPE_KEYMAP)

static PangoDirection
gdk_mir_keymap_get_direction (GdkKeymap *keymap)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_keymap_have_bidi_layouts (GdkKeymap *keymap)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_keymap_get_caps_lock_state (GdkKeymap *keymap)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_keymap_get_num_lock_state (GdkKeymap *keymap)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_keymap_get_scroll_lock_state (GdkKeymap *keymap)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_keymap_get_entries_for_keyval (GdkKeymap     *keymap,
                                       guint          keyval,
                                       GdkKeymapKey **keys,
                                       gint          *n_keys)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_keymap_get_entries_for_keycode (GdkKeymap     *keymap,
                                        guint          hardware_keycode,
                                        GdkKeymapKey **keys,
                                        guint        **keyvals,
                                        gint          *n_entries)
{
  g_error ("%s", G_STRFUNC);
}

static guint
gdk_mir_keymap_lookup_key (GdkKeymap          *keymap,
                           const GdkKeymapKey *key)
{
  g_error ("%s", G_STRFUNC);
}

static gboolean
gdk_mir_keymap_translate_keyboard_state (GdkKeymap       *keymap,
                                         guint            hardware_keycode,
                                         GdkModifierType  state,
                                         gint             group,
                                         guint           *keyval,
                                         gint            *effective_group,
                                         gint            *level,
                                         GdkModifierType *consumed_modifiers)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_keymap_add_virtual_modifiers (GdkKeymap       *keymap,
                                      GdkModifierType *state)
{
  /* TODO: add virtual modifiers */
}

static gboolean
gdk_mir_keymap_map_virtual_modifiers (GdkKeymap       *keymap,
                                      GdkModifierType *state)
{
  g_error ("%s", G_STRFUNC);
}

static GdkModifierType
gdk_mir_keymap_get_modifier_mask (GdkKeymap         *keymap,
                                  GdkModifierIntent  intent)
{
  return GDK_KEYMAP_CLASS (gdk_mir_keymap_parent_class)->get_modifier_mask (keymap, intent);
}

static guint
gdk_mir_keymap_get_modifier_state (GdkKeymap *keymap)
{
  g_error ("%s", G_STRFUNC);
}

static void
gdk_mir_keymap_class_init (GdkMirKeymapClass *klass)
{
  GdkKeymapClass *keymap_class = GDK_KEYMAP_CLASS (klass);

  keymap_class->get_direction = gdk_mir_keymap_get_direction;
  keymap_class->have_bidi_layouts = gdk_mir_keymap_have_bidi_layouts;
  keymap_class->get_caps_lock_state = gdk_mir_keymap_get_caps_lock_state;
  keymap_class->get_num_lock_state = gdk_mir_keymap_get_num_lock_state;
  keymap_class->get_scroll_lock_state = gdk_mir_keymap_get_scroll_lock_state;
  keymap_class->get_entries_for_keyval = gdk_mir_keymap_get_entries_for_keyval;
  keymap_class->get_entries_for_keycode = gdk_mir_keymap_get_entries_for_keycode;
  keymap_class->lookup_key = gdk_mir_keymap_lookup_key;
  keymap_class->translate_keyboard_state = gdk_mir_keymap_translate_keyboard_state;
  keymap_class->add_virtual_modifiers = gdk_mir_keymap_add_virtual_modifiers;
  keymap_class->map_virtual_modifiers = gdk_mir_keymap_map_virtual_modifiers;
  keymap_class->get_modifier_mask = gdk_mir_keymap_get_modifier_mask;
  keymap_class->get_modifier_state = gdk_mir_keymap_get_modifier_state;
}

static void
gdk_mir_keymap_init (GdkMirKeymap *self)
{
}

GdkKeymap *
gdk_mir_keymap_new (void)
{
  return g_object_new (GDK_TYPE_MIR_KEYMAP, NULL);
}

