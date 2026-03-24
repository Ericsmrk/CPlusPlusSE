# Lesson 1 — Exercises

Use the examples in `src/` and the notes in `notes.md` as references. Use `using namespace std;` after your includes (like the lesson examples) and clear names.

## Core exercises

1. **Hello, you**  
   Copy `hello.cpp` and change the messages so they print your name (or a display name) and one sentence about why you are learning C++.

2. **Mini biography**  
   Write a program that prints three labeled lines: your name, your field of study or role, and one goal for this course. Use `cout` and string literals only (no input yet).

3. **Two integers**  
   Write a program that asks for two integers (you may use `cin >>` for this exercise), then prints their sum, difference, product, and quotient.  
   *Hint:* For integer division, think about what happens when the division is not exact. (You will explore this more when Lesson 2 deepens types.)

4. **Greeting with a helper**  
   Start from `greeting.cpp`. Move the line that prints the greeting into a function, for example `void print_greeting(const string& name);`, and call it from `main()`. Keep `main()` short.

5. **Explain in one paragraph**  
   In your own words, why might a long `main()` with dozens of lines be harder to work with than a `main()` that calls a few well-named functions?

## Stretch exercises

1. After `getline` for a name, ask for a favorite number as an integer (you will need `cin >>` for the number). Explain why the order of `getline` and `>>` might require care (optional: look up “cin ignore newline” when stuck).

2. Add a small function `int max(int a, int b)` that returns the larger value; print the result for two `const` values in `main()`.
