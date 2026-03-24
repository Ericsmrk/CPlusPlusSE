# Lesson 1 — Quiz

Answer from memory first, then check your notes or the examples.

---

## Questions

1. What is the purpose of `main()` in a C++ program, and what does returning `0` conventionally mean?

2. What `#include` do you need for `cout`? For `string`?

3. What does `using namespace std;` do, and where should it appear relative to `#include` and `main()` in the Lesson 1 style?

4. What is the difference between *declaring* a variable and *initializing* it? Give a one-line example of each in C++.

5. What does `getline(cin, name)` do when `name` is a `string`?

6. In one sentence, what is one benefit of moving a block of logic out of `main()` into a function with a descriptive name?

---

## Answer key (self-check / instructor)

**1.** `main()` is where program execution begins. Returning `0` from `main()` conventionally signals success to the operating system (non-zero values often mean failure).

**2.** `<iostream>` for `cout` (and stream I/O); `<string>` for `string`.

**3.** It brings names from the `std` namespace into scope so you can write `cout`, `cin`, `string`, etc. without the `std::` prefix. In these lessons, place it after all `#include` lines and before `main()` (or before any code that uses those names).

**4.** *Declaration* introduces a name and its type (e.g. `int x;`). *Initialization* gives a value at creation (e.g. `int x = 3;` or `int x{3};`). A variable can be declared and initialized on one line.

**5.** It reads characters from standard input until the end of the current line (the newline is consumed but not stored in the string), and stores the result in `name`.

**6.** Example answer: a named function makes the program easier to read and change because the name summarizes the behavior and `main()` can focus on the high-level flow.
