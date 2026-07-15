# Dontdoas

Dontdoas is a tool that doesn't wanna help you.

**Original author:** [Malo](https://github.com/MaloLeNon)
**Maintainer of this fork:** [Loren](https://github.com/loren-wastaken)

This is a heavier version of Dontdoas (may be vibecoded).

## Usage

Dontdoas doesn't actually do anything — it just responds to flags with jokes.

| Flag           | Result                                      |
|----------------|----------------------------------------------|
| *(no flag)*    | Prints "Didn't doas."                        |
| `--help`       | "Didn't provide help."                       |
| `--sandbox`    | "Didn't sandboxed doas."                     |
| `--veromikka`  | "sowwy, couldn't dwoas :c"                   |
| `--kotekun`    | Prints the contents of `kotekun-logo.txt` (an ASCII avatar) — this file must be in the same folder as the executable, or the command will fail silently with a file error. |

## How to compile

### Windows

**1. Install prerequisites**
- [CMake](https://cmake.org/download/) — download the Windows binary distribution.
- A C compiler — get [w64devkit](https://github.com/skeeto/w64devkit): go to Releases, download the latest `w64devkit-x64-*.*.*.7z.exe`, and run it to install.

**2. Build**

```powershell
cd path\to\extracted\zip
mkdir build
cd build
cmake ..
cd ..
cmake --build build
```

This creates `MyApp.exe` in `build\debug`.

**3. Finish setup**

Copy `kotekun-logo.txt` into the same folder as `MyApp.exe` (needed only if you plan to use `--kotekun`).