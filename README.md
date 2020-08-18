## Setup

qmk firmware really wants you to have their repo in your home directory; a symlink works and is much handier, ie `qmk_firmware -> Source/qmk_firmware`.

Then in there, you'll need to add a symlink to the directory containing your keymap; in this case: `~/Source/qmk_firmware/keyboards/v60_type_r/keymaps/starry-night-custom -> ~/Source/qmk-keyboard-layout/starry-night-custom`.

When you want to build your firmware, you can run:
```
qmk compile --keyboard v60_type_r --keymap starry-night-custom
```
from anywhere, which will drop a new `v60_type_r_starry-night-custom.hex` in the root of `~/qmk_firmware`, which you can flash your keyboard with.

```
qmk compile --keyboard massdrop/alt --keymap paul
```
