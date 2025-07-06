# 🚀 C++ Unit Test Generator using AI & Google Test

This project implements a **unit test generator tool for C++ applications** using a self-hosted AI model with YAML-based prompts and Google Test. It automates the generation, refinement, and validation of test cases based on given C++ source code.

---

## 📌 Project Overview

- ✅ Automatically generates unit tests for C++ code
- 🤖 Uses AI model instructions via YAML prompts
- 🔁 Refines tests based on build results and test coverage
- 🧪 Uses **Google Test** framework for testing
- 📊 Supports test coverage measurement using `gcov`/`lcov`
- 🔧 Built with **CMake** and **MinGW GCC 15.1.0**

---

## 📁 Project Structure

<pre>
cpp-test-generator/
├── main.cpp # Application entry point
├── math_utils.cpp / .h              # C++ functions under test
├── string_utils.cpp / .h            # Utility functions
├── test/
│ └── test_main.cpp                  # Google Test unit tests
├── prompts/
│ ├── generate_tests.yaml            # AI test generation prompt
│ ├── refactor.yaml                  # AI test refinement prompt
│ └── fix_issues.yaml                # AI bug-fix prompt
├── third_party/
│ └── googletest/                    # Google Test submodule
├── CMakeLists.txt                   # CMake build configuration
└── README.md                        # Project documentation
</pre>

---

## ⚙️ Build Instructions

### 🛠 Prerequisites

- GCC 15.1.0 or newer (MinGW on Windows)
- CMake 3.10+
- Git (to handle submodules)

---

### 📦 Setup

```bash
# Clone the repository with submodules
git clone --recurse-submodules https://github.com/aritraghosh7/Cpp-test-Generator.git
cd Cpp-test-Generator

# Create build directory
mkdir build
cd build

# Run CMake
cmake .. -G "MinGW Makefiles"

# Build the app and tests
mingw32-make
```

### ▶️ Run the Main App

```bash
./my_console_app.exe
```

### 🧪 Run Unit Tests

```bash
./runTests.exe

```

### Expected Output:

```bash
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[ RUN      ] MathUtilsTest.Add
[       OK ] MathUtilsTest.Add
[ RUN      ] MathUtilsTest.DivideByZero
[       OK ] MathUtilsTest.DivideByZero
[==========] 2 tests from 1 test suite ran.
[  PASSED  ] 2 tests.


```

## 📄 YAML Prompt Files (AI Instructions)

YAML files inside the prompts/ folder are used to communicate with an AI model for:

- Generating unit tests

- Refactoring existing tests
- Fixing build/test issues

Each YAML contains structured instructions for the model (e.g., Ollama or GPT via API).

---

## 📊 Test Coverage (Optional)

This project supports GCC-compatible coverage tools (e.g., gcov or lcov). Example:

```bash
g++ -fprofile-arcs -ftest-coverage ...
gcov math_utils.cpp
```
