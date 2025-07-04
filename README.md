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
├── main.cpp                  # Application entry point
├── math_utils.cpp / .h       # C++ functions under test
├── string_utils.cpp / .h     # Utility functions
├── test/
│ └── test_main.cpp           # Google Test unit tests
├── prompts/
│ ├── generate_tests.yaml     # AI test generation prompt
│ ├── refactor.yaml           # AI test refinement prompt
│ └── fix_issues.yaml         # AI bug-fix prompt
├── third_party/
│ └── googletest/             # Google Test submodule
├── CMakeLists.txt            # CMake build configuration
└── README.md                 # Project documentation
</pre>
