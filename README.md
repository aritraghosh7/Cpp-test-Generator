# KeployorgChartUnitTestGen

This project demonstrates how to generate and execute unit tests in a modern C++ codebase using the **Google Test** framework. It focuses on testing utility functions (e.g., `add`, `multiply`) with the help of CMake for building and configuration.

---

## 📁 Project Structure

<pre>

orgChartUnitTestGen/
├── orgChartApi/ # Main project folder
│ ├── clean_src/ # Source code (math_utils, etc.)
│ ├── test_gen/ # LLM-generated test code
│ ├── CMakeLists.txt # Build configuration
│ └── build/ # CMake-generated build files (ignored by git)
├── googletest/ # GoogleTest source (manually cloned or submodule)
│ └── build/ # GTest build files
└── README.md # Project documentation


</pre>
---
