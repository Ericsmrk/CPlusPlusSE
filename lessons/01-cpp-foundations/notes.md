# Lesson 1: C++ Foundations — Your First Programs

## Lesson overview

This lesson starts at the beginning: what a C++ source file looks like, how the program begins and ends, how you print text and read input, and how to split work into small functions. Everything here is **Stage A — Core C++ Foundations** material. The goal is fluency with the shape of a program, not software architecture theory.

Later lessons will deepen types, references, and `const` (Lesson 2), then functions and decomposition in more detail (Lesson 3). For now, you only need enough syntax to write short, correct programs you can run and modify.

---

## Primary C++ Goal

Build a working mental model of a minimal C++ program: translation units, `#include`, `using namespace std;`, `main()`, statements and braces, returning a status code from `main`, basic types like `int`, using `cout` / `cin` / `string`, and calling simple free functions. You should be able to read and write small programs without guessing why they compile.

---

## Software engineering connection

**Readability, naming, and small steps.** Even at this level, code is easier to change when names say what they mean and when `main()` stays short by delegating to functions. This is *not* a lesson about design patterns or SOLID; it is about habits that keep beginner programs clear so you can grow into larger programs later. Think: *avoid a giant `main()`*, *use obvious names*, *one idea per function when it helps*.

---

## Key concepts

| Topic | What to know now |
|--------|------------------|
| **Source file** | Text you save as `.cpp`; the compiler turns it into an executable. |
| **`#include`** | Brings in standard library headers (like `<iostream>`) so you can use streams and types defined there. |
| **`main()`** | Special function where execution starts. Returning `0` means success to the operating system. |
| **`using namespace std;`** | After this line (placed after your `#include`s), names like `cout`, `cin`, and `string` refer to the standard library without writing `std::` each time. This repo’s Lesson 1 examples use this style. |
| **Statements** | Instructions ending with `;`; grouped in `{ }` blocks. |
| **`int`, `const`** | Integers; `const` means the value will not change (used here in a simple way; Lesson 2 goes deeper). |
| **Function** | Named chunk of code you can call with arguments; helps decomposition. |
| **`string`** | Text type from `<string>` (in namespace `std`); use `getline(cin, name)` to read a full line into a `string`. |

---

## Annotated examples

The runnable sources live in `lessons/01-cpp-foundations/src/`. Below is a line-oriented reading guide.

### Example 1 — `hello.cpp`: structure and output

```cpp
// Lesson 1 — Example: minimal program structure and output
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!\n";
    cout << "Welcome to the CPlusPlusSE learning path.\n";
    return 0;
}
```

| Line(s) | Meaning |
|--------|---------|
| Comment at top | Reminds you what file you are reading; comments do not affect the executable. |
| `#include <iostream>` | Pulls in declarations for stream input/output; needed for `cout`. |
| `using namespace std;` | Lets you write `cout` instead of `std::cout` in this file. |
| `int main() {` | Program entry point; `int` is the return type (status code to the OS). |
| `cout << "..."` | Sends text to the standard output stream; `\n` is a newline. |
| `return 0;` | Tells the environment the program finished successfully. |
| Closing `}` | Ends the body of `main`. |

### Example 2 — `greeting.cpp`: input and a `string`

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "What is your name? ";
    string name{};
    getline(cin, name);

    cout << "Nice to meet you, " << name << ".\n";
    return 0;
}
```

| Line(s) | Meaning |
|--------|---------|
| `#include <string>` | Needed for the `string` type. |
| `using namespace std;` | Brings standard names like `string`, `cin`, and `cout` into scope. |
| `string name{};` | Creates a string variable, value-initialized to empty; Lesson 2 covers initialization in depth. |
| `getline(cin, name)` | Reads a full line (including spaces) from standard input into `name`. |
| `<< name` | Inserts the string into the output stream. |

Run this program in a terminal and type your name when prompted. It waits for input, so automated tests in the repo do not run this target the same way as the non-interactive examples.

### Example 3 — `add_numbers.cpp`: a tiny function and a short `main()`

```cpp
#include <iostream>
using namespace std;

int add(int left, int right) { return left + right; }

int main() {
    const int a = 14;
    const int b = 28;
    const int sum = add(a, b);

    cout << a << " + " << b << " = " << sum << '\n';
    return 0;
}
```

| Line(s) | Meaning |
|--------|---------|
| `add(...)` | Free function taking two `int`s; keeps the “add two numbers” idea in one place. |
| `const int a` | `a` cannot be reassigned; reinforces intent (details in Lesson 2). |
| `add(a, b)` | Function call; result stored in `sum`. |

This pattern—**data in `main`, behavior in a named function**—is the gentlest introduction to decomposition: your program stays readable as it grows.

---

## Build and run (this repository)

From the repository root (after opening the dev container or with CMake installed locally):

```bash
cmake --preset default
cmake --build --preset default
```

Run the Lesson 1 executables from the build directory (names may vary slightly by generator; examples):

```bash
./lesson01_hello
./lesson01_greeting
./lesson01_add_numbers
```

On Windows with Visual Studio generators, executables may live under `build\Debug\` or similar—run the produced `.exe` from your build tree.

To run the lesson tests:

```bash
ctest --preset default
```

---

## Common mistakes

1. **Forgetting `;`** after a statement. The compiler error often points to the *next* line, which confuses beginners—check the line above.
2. **`#include` wrong or missing.** For example, using `string` without `#include <string>`.
3. **Forgetting `using namespace std;` then writing `cout` or `string`.** Either add `using namespace std;` after your includes, or prefix with `std::` (this course uses `using namespace std;` in Lesson 1 for shorter examples).
4. **Mixing `>>` and `getline`.** If you used `operator>>` on numbers earlier, a newline can be left in the buffer and confuse the next `getline`. This lesson uses only `getline` for text input to keep behavior predictable.
5. **Returning nothing from `main` in C++.** In modern C++, falling off the end of `main` implies `return 0`, but being explicit is clearer while learning.
6. **Giant `main()` habit.** Pushing everything into `main()` works for ten lines but becomes hard to read quickly; extracting helpers early is a good default.

---

## Exercises

See `exercises.md` in this folder for numbered tasks. Do them by editing copies of the examples or new `.cpp` files under `src/` if you like.

---

## Stretch exercises

1. Add a second helper in `add_numbers.cpp` (for example, `int multiply(int, int)`) and print both sum and product.
2. Change `greeting.cpp` to ask for a city as a second `getline` and print a one-line summary.
3. Read about the difference between `'\n'` and `endl` in a reference; use `'\n'` in new code unless you need flushing (Lesson 1: default to `'\n'`).

---

## Connection to previous lessons

There is no prior lesson in this repository—this is the starting point. Lesson 2 will build directly on the variables and `const` you saw here and will introduce references systematically.
