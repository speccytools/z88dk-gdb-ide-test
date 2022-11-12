# IDE debug example for z88dk (VSCode, CLion)

1. Install latest z88dk
2. Dowload emulator with gdbstub, e.g. [Fuse fork from speccytools.org](https://speccytools.org) or MAMEdev. You can also debug real hardware with [Spectranet](https://github.com/speccytools/spectranet-gdbserver)
3. Launch the emulator, with Fuse, make sure gdbserver is enabled on port 1337
4. Build the project. For VSCode it's Debug configuration, for CLion it's idetest | Debug
5. Place a breakpoint on `sum`
6. Start the debugging session, (Debugging tab on VSCode, "emulator" configuration for CLion)
7. z88dk-gdb should upload the binary onto the emulator
8. You should see the breakpoint being hit

See how z88dk implements CMake [here](https://github.com/z88dk/z88dk/wiki/CMake)
