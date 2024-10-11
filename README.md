# C++ Template

This template can be used to create modern C++ applications based on CMake.

## Prerequisites

A C++ toolchain, `clang-tools` and `CMake` need to be available on the system. I you prefer using `clang` as C++ compiler, it also needs to be available on the system.

## Usage

New libraries can be added using [CPM.cmake](https://github.com/cpm-cmake/CPM.cmake) only using CMake files.

The compilation will produce three executables

1. the actual binary
2. a benchmarking binary
3. a testing binary

The compilation can either be done using raw CMake or CMake presets.

```shell
# Raw CMake
cmake -S . -B build
cmake --build build
```

```shell
# CMake preset
cmake --preset PRESET
cmake --build --preset PRESET
```

## TODO: Code Documentation with Doxygen

## Preinstalled Libraries

- [Benchmark](https://github.com/google/benchmark)
- [GoogleTest](https://github.com/google/googletest)
- [{fmt}](https://github.com/fmtlib/fmt)
- [spdlog](https://github.com/gabime/spdlog)
- [CLI11](https://github.com/CLIUtils/CLI11)
- [dotenv-cpp](https://github.com/laserpants/dotenv-cpp)
