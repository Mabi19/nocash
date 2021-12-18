# nocash
Small command-line utility for POSIX-compliant systems to skip the $ character when copy-pasting shell commands.

*Note: I found out about [DollarSkip](https://github.com/CleanMachine1/DollarSkip) about half-way into making this project.*

## Installation
You need Meson, Ninja and a C compiler.
```sh
git clone https://github.com/Mabi19/nocash
cd nocash

meson setup build
cd build
sudo meson install
```

## License
MIT
