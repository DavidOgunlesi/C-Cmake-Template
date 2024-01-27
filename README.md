# C++ CMake Template

This C++ CMake template provides a basic structure for C++ projects using CMake as the build system. The template includes convenient batch (`.bat`) commands for building, running, and cleaning the project.

## Prerequisites

Before using this template, make sure you have the following installed:

- CMake: [https://cmake.org/](https://cmake.org/)
- C++ Compiler (e.g., GCC, Clang, MSVC)

## Project Structure

```
project-root/
│
├── CMakeLists.txt
├── scripts/
├── dependencies/
├── src/
│   ├── main.cpp
│   └── ...
└── build/
```

## Usage

### Build

To build the project, run the `scripts/build.bat` script:

```
cpp build
```

This script will create a `build` directory (if it doesn't exist) and generate the necessary build files using CMake. It will then build the project using the chosen C++ compiler.

### Run

To run the built executable, use the `cpp_run.bat` script:

```
cpp run
```

This script assumes that the project has been built successfully. It will execute the compiled executable from the `build` directory.

### Clean

To clean the build files and executable, run the `scripts/clean.bat` script:

```cpp clean
```

This script will remove the `build` directory and any generated files.

## Customization

Feel free to modify the `CMakeLists.txt` file to suit your project's specific requirements. You can also customize the batch scripts according to your needs.

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to use this template as a starting point for your C++ projects! If you have any feedback or improvements, please contribute or open an issue.
