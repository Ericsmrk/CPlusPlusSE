# CPlusPlusSE

A reproducible C++ + Software Engineering learning system.

## Goals
- Master modern C++
- Learn software engineering principles alongside the language
- Keep lessons, exercises, quizzes, examples, and projects in one versioned repo
- Use a reproducible VS Code development environment across computers

## Tooling
- VS Code
- Dev Containers
- CMake
- CMake Presets
- GCC/GDB inside the container

## Repo layout
```text
.devcontainer/
.vscode/
examples/
lessons/
projects/
CMakeLists.txt
CMakePresets.json
```

## Getting started
1. Open this repo in VS Code.
2. Install the recommended extensions.
3. Reopen in Container.
4. Configure and build:
   ```bash
   cmake --preset default
   cmake --build --preset default
   ctest --preset default
   ```

## Learning workflow
Each lesson should contain:
- `notes.md`
- `exercises.md`
- `quiz.md`
- `src/` runnable examples

## First integrated topics
- C++ foundations
- classes and object lifecycle
- abstraction and encapsulation
- Abstract Factory
- Builder
