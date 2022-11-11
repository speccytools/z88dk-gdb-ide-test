# VSCode debug example for z88dk

1. Install latest z88dk
2. Dowload emulator with gdbstub, e.g. [Fuse](https://speccytools.org) or MAMEdev
3. Launch the emulator, with Fuse, make sure gdbserver is enabled on port 1337
4. Build the project, select Debug configuration
5. Start the debugging session, z88dk-gdb should upload the binary onto the emulator