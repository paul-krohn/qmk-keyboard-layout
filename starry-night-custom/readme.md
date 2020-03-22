# KB Paradise V60 Type R Custom Layout

This is based on the default KBP Type R layout, with these changes:
* the key labelled `Caps Lock` is the `Control` key
* the keys labelled `Ctrl` are Fn0; that is, they enable Layer 1.
* the key that is the Windows "Application" key is the Fn2 key; that is, it enables Layer 2.
* the default keymap has no Layer 2. See notes below about that setup.

## Keymap Notes
- Does not support control for in-switch or underglow lighting
- Keymap is not the same as other KBP V60 keyboards


### Build
To build this keymap, follow the parent path directions, then run `make v60_type_r:default`.

### Paul's Notes

While _this code_ supports function keys f1 through f31, macOS only supports f1 through f20, f21 through f31 are just not there.

My destination is Hammerspoon, so I am limited by [their keymap](https://www.hammerspoon.org/docs/hs.keycodes.html#map).

So I map a collection of "unused" keys -- at least, not physically present on this particular 60% keyboard.

f13 through f20 (8 keys)
pad through padenter (18 keys)

-> great coincidence, that is 26 keys.
