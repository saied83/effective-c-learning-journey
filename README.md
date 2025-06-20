# Effective C – A Practical Journey

Welcome to my learning repository based on the book **"Effective C: An Introduction to Professional C Programming"** by **Robert C. Seacord**.

## 📌 Why This Repo?

As a full-time frontend developer, I’m passionate about strengthening my core **computer science** and **low-level systems programming** skills. This repo documents my hands-on learning journey through the book, with annotated code samples, exercises, and scripts, organized chapter by chapter.

## 📚 Book Reference

- **Title:** Effective C: An Introduction to Professional C Programming
- **Author:** Robert C. Seacord

---

## 📁 Structure

```

.
├── chapter-1                  # Basic hello world and setup
├── chapter-2                  # Variables, types, and storage classes
├── chapter-3                  # Numeric types and undefined behaviors
├── chapter-4                  # Expressions and operator safety
├── chapter-5                  # Control flow and function calls
├── chapter-6                  # Memory management
├── chapter-8                  # Input and output
├── chapter-9                  # Macros and the C preprocessor
├── chapter-10                 # Building static libraries and modularity
├── chapter-11                 # Safe C and secure coding practices
├── makefile                   # Build helper
├── configure                  # Configuration script (if applicable)
└── README.md                  # This file

```

Each chapter includes:

- ✅ Code examples from the book
- ✏️ My own experimentations and exercises
- 🧪 Fail cases and undefined behavior examples
- 🛠️ Build scripts where necessary

---

## 🛠️ How to Run Code

Use `gcc` (or `clang`) to compile C files:

```bash
gcc -Wall -Wextra -pedantic -std=c11 chapter-2/variables.c -o variables
./variables
```

For scripts in chapter 10 or CMake projects:

```bash
cd chapter-10/prime
mkdir build && cd build
cmake ..
make
./driver
```

---

## 🚀 Learning Goals

- Master core C concepts: pointers, memory, types, control flow
- Understand undefined, implementation-defined, and unspecified behaviors
- Practice secure and robust C coding
- Improve system-level understanding that will benefit my web & frontend work

---

## 📦 Tools Used

- `gcc` / `clang`
- `make`, `CMake`
- Shell scripting
- (Optional) `Valgrind`, `gdb`, `clang-analyzer`

---

## 🧠 Side Projects

I’ll be extending this repo with small C utilities and programs (e.g., CLI tools, allocators, simulators) inspired by what I learn from each chapter.

---

## 👨‍💻 Author

**Md. Saiedur Rahman Saied**
Frontend Developer @ TARS INDUSTRIES
Aspiring Systems Thinker • Lifelong Learner

---

## 🙏 Acknowledgements

- Robert C. Seacord for writing a fantastic modern C guide
- The open-source community for C development tools and learning materials

---

## ⭐️ If you found this interesting...

Feel free to fork, explore, and follow along!
