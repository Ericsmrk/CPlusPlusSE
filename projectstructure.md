# Project Structure

This document defines the long-term structure of `CPlusPlusSE` without changing the main `README.md` yet.

The goal is to make this repository a **C++ + Software Engineering learning system** that teaches:

- modern C++
- software engineering design principles
- UML-based design thinking
- design patterns in C++
- formal reasoning about correctness
- recurring Maze Game examples from software engineering class

---

# Purpose

This repository is designed to teach both:

1. **How to write C++ well**
2. **How to design software well**

Instead of learning syntax alone, the repository is organized so that every major C++ topic connects to software engineering ideas such as:

- modularity
- cohesion
- coupling
- inheritance
- polymorphism
- SOLID principles
- Law of Demeter
- MVC
- design patterns
- essential vs accidental complexity
- proof of correctness
- Petri Nets

---

# High-Level Repository Layout

```text
CPlusPlusSE/
├── README.md
├── projectstructure.md
├── CMakeLists.txt
├── CMakePresets.json
├── .gitignore
│
├── docs/
│   ├── course-roadmap.md
│   ├── glossary.md
│   ├── uml-guide.md
│   ├── solid-principles.md
│   ├── pattern-comparison-guide.md
│   ├── maze-game-case-study.md
│   └── design-notes/
│
├── shared/
│   ├── include/
│   ├── src/
│   ├── tests/
│   ├── uml/
│   └── maze-game-domain/
│
├── lessons/
│   ├── 01-cpp-foundations/
│   ├── 02-types-references-const/
│   ├── 03-functions-decomposition/
│   ├── 04-classes-encapsulation/
│   ├── 05-raii-ownership/
│   ├── 06-inheritance-polymorphism/
│   ├── 07-cohesion-coupling-modularity/
│   ├── 08-law-of-demeter/
│   ├── 09-open-closed-principle/
│   ├── 10-liskov-substitution-principle/
│   ├── 11-dependency-inversion-principle/
│   ├── 12-single-responsibility-interface-segregation/
│   ├── 13-extension-contraction/
│   ├── 14-essential-vs-accidental-complexity/
│   ├── 15-mvc/
│   ├── 16-singleton/
│   ├── 17-abstract-factory/
│   ├── 18-adapter/
│   ├── 19-decorator/
│   ├── 20-facade/
│   ├── 21-composite/
│   ├── 22-proxy/
│   ├── 23-observer/
│   ├── 24-visitor/
│   ├── 25-chain-of-responsibility/
│   ├── 26-command/
│   ├── 27-models-of-computation/
│   ├── 28-petri-nets/
│   └── 29-proof-of-correctness/
│
└── capstones/
    ├── maze-game-architecture/
    └── mini-system-refactor/
```

---

# Standard Lesson Folder Template

Each lesson should follow the same structure so the repository stays predictable and scalable.

```text
lesson-name/
├── README.md
├── learning-objectives.md
├── notes.md
├── include/
├── src/
├── tests/
├── uml/
│   ├── class-diagram.puml
│   ├── sequence-diagram.puml
│   └── rendered/
├── examples/
└── exercises/
```

## Folder roles

### `README.md`
Contains:
- lesson overview
- why the topic matters
- build/run instructions
- lesson deliverables

### `learning-objectives.md`
Contains:
- what should be understood
- what should be implemented
- what design judgment should be explained

### `notes.md`
Contains:
- deeper lesson explanation
- concept comparisons
- common mistakes
- exam-style review notes

### `include/`
Header files for the lesson.

### `src/`
Implementation files for the lesson.

### `tests/`
Unit or integration tests.

### `uml/`
PlantUML source files and rendered diagrams.

### `examples/`
Small focused demos.

### `exercises/`
Practice work and challenge prompts.

---

# Standard Lesson Format

Every lesson should use the same teaching flow.

1. **Concept overview**
2. **Why it matters in software engineering**
3. **C++ implementation walkthrough**
4. **Design discussion**
5. **UML diagram(s)**
6. **Common mistakes**
7. **Exercises**
8. **Connection to earlier lessons**

---

# Lesson Roadmap

## Lesson 01 — C++ Foundations
**Folder:** `lessons/01-cpp-foundations/`

### Main focus
- basic program structure
- compilation
- source files vs header files
- functions
- simple input/output

### Software engineering connection
- basic modularity
- readability
- naming discipline

### Suggested deliverables
- hello world
- one small utility function
- first CMake target

---

## Lesson 02 — Types, References, and Const
**Folder:** `lessons/02-types-references-const/`

### Main focus
- primitive types
- `auto`
- references
- `const`
- pass by value vs pass by reference

### Software engineering connection
- interface clarity
- transparency of intent
- reducing accidental complexity

### Suggested deliverables
- examples showing mutation vs non-mutation
- utility functions with different parameter styles

---

## Lesson 03 — Functions and Decomposition
**Folder:** `lessons/03-functions-decomposition/`

### Main focus
- function declarations and definitions
- parameter passing
- return values
- overloading
- decomposition
- helper functions

### Software engineering connection
- modularity
- cohesion
- coupling
- readable function boundaries

### Suggested deliverables
- refactor one long function into smaller cohesive ones
- compare bad vs good decomposition

---

## Lesson 04 — Classes and Encapsulation
**Folder:** `lessons/04-classes-encapsulation/`

### Main focus
- class structure
- public/private
- constructors
- methods
- invariants
- header/implementation separation

### Software engineering connection
- information hiding
- cohesion
- stable interfaces

### Suggested deliverables
- `Task`, `BankAccount`, or `Timer` class
- invariant enforcement through methods

---

## Lesson 05 — RAII and Ownership
**Folder:** `lessons/05-raii-ownership/`

### Main focus
- RAII
- constructors/destructors
- stack vs heap
- `unique_ptr`
- `shared_ptr`
- ownership rules

### Software engineering connection
- safer design
- correctness by construction
- reducing accidental complexity

### Suggested deliverables
- resource wrapper class
- file/logger/session guard example

---

## Lesson 06 — Inheritance and Polymorphism
**Folder:** `lessons/06-inheritance-polymorphism/`

### Main focus
- base classes
- derived classes
- virtual functions
- abstract classes
- override
- runtime polymorphism

### Software engineering connection
- inheritance
- polymorphism
- design contracts
- setup for Liskov Substitution Principle

### Suggested deliverables
- `Shape` hierarchy or small Maze element hierarchy
- dynamic dispatch demo

---

## Lesson 07 — Cohesion, Coupling, and Modularity
**Folder:** `lessons/07-cohesion-coupling-modularity/`

### Main focus
- cohesion
- coupling
- modularity
- designing boundaries

### Software engineering connection
- maintainability
- testability
- design quality

### Suggested deliverables
- bad “God class” example
- refactored modular version
- written analysis of improvement

---

## Lesson 08 — Law of Demeter
**Folder:** `lessons/08-law-of-demeter/`

### Main focus
- “talk only to your immediate friends”
- train-wreck calls
- reducing deep object chaining

### Software engineering connection
- low coupling
- encapsulation
- interface discipline

### Suggested deliverables
- bad chained access example
- refactored façade-like interaction

---

## Lesson 09 — Open/Closed Principle
**Folder:** `lessons/09-open-closed-principle/`

### Main focus
- open for extension
- closed for modification
- extension via abstraction and polymorphism

### Software engineering connection
- extensibility
- architecture stability
- plugin-style thinking

### Suggested deliverables
- pricing, notification, or action system
- add new behavior without changing stable core code

---

## Lesson 10 — Liskov Substitution Principle
**Folder:** `lessons/10-liskov-substitution-principle/`

### Main focus
- substitutability
- behavioral contracts
- bad inheritance examples

### Software engineering connection
- safe polymorphism
- trustworthy abstractions
- avoiding fragile hierarchies

### Suggested deliverables
- broken rectangle/square-style example
- corrected design using better abstraction or composition

---

## Lesson 11 — Dependency Inversion Principle
**Folder:** `lessons/11-dependency-inversion-principle/`

### Main focus
- depend on abstractions, not concretions
- interfaces
- constructor injection
- test doubles

### Software engineering connection
- architecture quality
- testability
- low coupling

### Suggested deliverables
- `ReportService` using `ILogger` and `IStorage`
- swap implementations without changing service logic

---

## Lesson 12 — Single Responsibility + Interface Segregation
**Folder:** `lessons/12-single-responsibility-interface-segregation/`

### Main focus
- focused responsibilities
- splitting large interfaces
- avoiding fat classes

### Software engineering connection
- cohesion
- maintainability
- clearer contracts

### Suggested deliverables
- split one large class into focused parts
- split one large interface into smaller interfaces

---

## Lesson 13 — Extension and Contraction
**Folder:** `lessons/13-extension-contraction/`

### Main focus
- extending software safely
- contracting bloated designs into focused units
- refactoring toward cleaner abstractions

### Software engineering connection
- design evolution
- accidental complexity control
- maintainability over time

### Suggested deliverables
- start with overgrown module
- contract responsibilities
- add extension point cleanly

---

## Lesson 14 — Essential vs Accidental Complexity
**Folder:** `lessons/14-essential-vs-accidental-complexity/`

### Main focus
- Brooks’ idea
- inherent domain complexity
- complexity caused by poor design, tooling, or structure

### Software engineering connection
- engineering judgment
- simplification
- recognizing wasted complexity

### Suggested deliverables
- system analysis
- label essential vs accidental parts
- redesign to reduce accidental complexity

---

## Lesson 15 — MVC
**Folder:** `lessons/15-mvc/`

### Main focus
- Model
- View
- Controller
- separation of concerns

### Software engineering connection
- architecture
- interface separation
- event flow

### Suggested deliverables
- console-based Maze Game or task system using MVC
- one action flow from controller to model to view

---

## Lesson 16 — Singleton
**Folder:** `lessons/16-singleton/`

### Main focus
- singleton structure
- Meyers singleton
- global access concerns
- tradeoffs

### Software engineering connection
- hidden coupling
- testing concerns
- pattern misuse warnings

### Suggested deliverables
- config manager singleton
- critique section explaining when not to use it

---

## Lesson 17 — Abstract Factory
**Folder:** `lessons/17-abstract-factory/`

### Main focus
- families of related objects
- creation through interfaces
- decoupling creation from use

### Software engineering connection
- Open/Closed Principle
- Dependency Inversion Principle
- product families
- Maze Game example

### Suggested deliverables
- Maze factory
- enchanted maze factory
- bombed maze factory

---

## Lesson 18 — Adapter
**Folder:** `lessons/18-adapter/`

### Main focus
- converting one interface to another
- wrapping incompatible code

### Software engineering connection
- legacy integration
- decoupling
- reuse

### Suggested deliverables
- adapt legacy logger, printer, or parser interface

---

## Lesson 19 — Decorator
**Folder:** `lessons/19-decorator/`

### Main focus
- dynamic behavior wrapping
- composition over inheritance

### Software engineering connection
- extensibility
- avoiding subclass explosion
- transparent feature layering

### Suggested deliverables
- stream/text formatter or game item modifier example

---

## Lesson 20 — Façade
**Folder:** `lessons/20-facade/`

### Main focus
- simplify a complex subsystem
- provide a clean front door

### Software engineering connection
- low coupling
- usability
- easier client code

### Suggested deliverables
- subsystem with many classes
- one façade for simplified client use

---

## Lesson 21 — Composite
**Folder:** `lessons/21-composite/`

### Main focus
- trees
- leaves and composites
- uniform treatment of grouped and individual objects

### Software engineering connection
- recursive design
- hierarchical systems
- flexible object structures

### Suggested deliverables
- file system, UI tree, or maze structure example

---

## Lesson 22 — Proxy
**Folder:** `lessons/22-proxy/`

### Main focus
- placeholder object
- access control
- lazy loading
- remote-like access

### Software engineering connection
- performance
- security
- controlled access

### Suggested deliverables
- image, document, or resource proxy example

---

## Lesson 23 — Observer
**Folder:** `lessons/23-observer/`

### Main focus
- publish/subscribe
- notifying dependents of state changes
- loose coupling in event systems

### Software engineering connection
- event-driven systems
- UI updates
- scalable reactions to change

### Suggested deliverables
- game state observer
- score/UI/logger observers

---

## Lesson 24 — Visitor
**Folder:** `lessons/24-visitor/`

### Main focus
- separate operations from object structure
- double dispatch
- adding operations without changing element classes

### Software engineering connection
- operation extensibility
- structured traversal
- tradeoffs in object model rigidity

### Suggested deliverables
- Maze element visitor or AST visitor

---

## Lesson 25 — Chain of Responsibility
**Folder:** `lessons/25-chain-of-responsibility/`

### Main focus
- request passes along a chain
- handler decides to process or delegate

### Software engineering connection
- flexible request handling
- decoupling sender from final receiver

### Suggested deliverables
- validation pipeline
- support escalation chain
- input handling chain

---

## Lesson 26 — Command
**Folder:** `lessons/26-command/`

### Main focus
- encapsulate actions as objects
- undo/redo
- queueing and logging commands

### Software engineering connection
- controller logic
- decoupling invoker from receiver
- action history

### Suggested deliverables
- Maze Game movement command system
- undoable commands

---

## Lesson 27 — Models of Computation
**Folder:** `lessons/27-models-of-computation/`

### Main focus
- what a computation model is
- state transitions
- abstractions for behavior and execution

### Software engineering connection
- thinking formally about systems
- connecting implementation to theory

### Suggested deliverables
- simple state machine examples
- system behavior discussion

---

## Lesson 28 — Petri Nets
**Folder:** `lessons/28-petri-nets/`

### Main focus
- places
- transitions
- tokens
- concurrency modeling
- deadlock intuition

### Software engineering connection
- formal models of concurrency
- workflow reasoning

### Suggested deliverables
- represent a small process as a Petri Net
- optionally build a simple simulation

---

## Lesson 29 — Proof of Correctness
**Folder:** `lessons/29-proof-of-correctness/`

### Main focus
- preconditions
- postconditions
- invariants
- Hoare-style reasoning

### Software engineering connection
- correctness
- trustworthy software
- formal reasoning about implementation

### Suggested deliverables
- prove correctness of a small algorithm or state update
- annotate code with conditions and invariants

---

# Capstones

## Capstone 1 — Maze Game Architecture
**Folder:** `capstones/maze-game-architecture/`

### Goal
Combine multiple lessons into a single coherent system.

### Include
- MVC
- Abstract Factory
- Command
- Observer
- Composite or Visitor
- UML diagrams
- tests

### Deliverables
- working Maze Game skeleton
- architecture writeup
- design rationale
- UML package/class diagrams

---

## Capstone 2 — Mini System Refactor
**Folder:** `capstones/mini-system-refactor/`

### Goal
Start with intentionally messy code and improve it.

### Include
- cohesion/coupling analysis
- Law of Demeter fixes
- OCP/DIP improvements
- UML before and after
- written justification

---

# Shared Case Study: Maze Game

The Maze Game should act as the recurring example domain throughout the course.

## Use Maze Game for
- inheritance/polymorphism
- MVC
- Abstract Factory
- Observer
- Visitor
- Command
- Composite
- possible Façade

## Why
It gives continuity and reinforces how the same domain can be redesigned using different principles and patterns.

---

# UML Expectations

Each architecture-heavy lesson should include UML.

## Minimum expectation
- class diagram for structural relationships
- sequence diagram for interaction-heavy lessons
- state or process diagram where behavior matters

## Recommended tooling
- PlantUML source in each lesson’s `uml/` folder
- rendered images in `uml/rendered/`

---

# Testing Expectations

Each lesson should include tests when practical.

## Testing goals
- verify behavior
- reinforce contracts
- show why abstractions help testing
- support modular design lessons

## Recommended approach
- use a simple test framework or lightweight assertions
- at minimum, lesson-level executable checks

---

# Suggested Docs Folder Content

## `docs/course-roadmap.md`
High-level map of the repository.

## `docs/glossary.md`
Definitions for:
- abstraction
- encapsulation
- coupling
- cohesion
- polymorphism
- inheritance
- modularity
- invariants

## `docs/uml-guide.md`
How to read and create the UML used in the repo.

## `docs/solid-principles.md`
Repository-wide summary of:
- SRP
- OCP
- LSP
- ISP
- DIP

## `docs/pattern-comparison-guide.md`
Comparisons such as:
- Adapter vs Façade
- Decorator vs inheritance
- Composite vs ordinary containment
- Command vs direct function calls
- Abstract Factory vs direct construction
- Observer vs polling

## `docs/maze-game-case-study.md`
How the Maze Game evolves across lessons.

---

# Suggested Progression Strategy

## Stage A — Learn the language
Lessons 1–6

## Stage B — Learn design principles
Lessons 7–14

## Stage C — Learn architecture and patterns
Lessons 15–26

## Stage D — Learn formal reasoning
Lessons 27–29

## Stage E — Integrate everything
Capstones

---

# Definition of Done for a Lesson

A lesson is complete when it has:

- `README.md`
- code in `src/` and `include/`
- at least one working example
- at least one exercise
- at least one diagram when appropriate
- build target added to CMake
- tests or validation checks
- notes on common mistakes

---

# Minimal CMake Growth Plan

At the root, add one target per lesson over time.

Example target naming:
- `lesson02_types`
- `lesson03_decomposition`
- `lesson04_encapsulation`
- `lesson17_abstract_factory`
- `capstone_maze_game`
- `capstone_refactor`

---

# Summary

This structure turns the repository into a **C++ + Software Engineering mastery track**.

It should support:
- progressive C++ skill building
- integrated software engineering principles
- design pattern implementations
- recurring Maze Game examples
- UML-supported design explanations
- later formal reasoning work
- capstones that bring everything together

This file is intentionally separate from the main `README.md` so the repo can evolve before the public-facing overview is updated.
