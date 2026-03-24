# CPlusPlusSE Source of Truth

This document is the source of truth for the direction, structure, and teaching philosophy of the `CPlusPlusSE` repository.

It exists to keep the project aligned as the repository grows.

---

# Core Mission

`CPlusPlusSE` is a structured learning repository for **mastering C++ from scratch** while **gradually integrating software engineering principles, UML, design patterns, and formal reasoning**.

The most important rule is:

> **This repository teaches C++ first.**  
> Software engineering topics are layered on top of the C++ learning path, not used as a replacement for it.

This means the repository is **not** just a software engineering notes repo with C++ examples.  
It is a **C++ learning system** that uses software engineering topics to deepen understanding and improve design thinking.

---

# Primary Priority Order

The repository should always prioritize learning in this order:

1. **Learn C++ fundamentals from scratch**
2. **Practice writing modern C++ through small programs**
3. **Use software engineering principles to improve those programs**
4. **Implement design patterns only after the C++ base is strong enough**
5. **Add theory and formal reasoning after practical coding foundations are in place**

If there is ever a conflict between “teaching a software engineering topic” and “keeping the C++ learning progression clear,” the C++ learning progression wins.

---

# Teaching Philosophy

Every lesson in this repository should answer two questions:

## 1. What C++ am I learning here?
This is the main focus.

## 2. What software engineering idea does this support?
This is the secondary focus.

That keeps the repo centered on learning C++ while still integrating software engineering naturally.

---

# Repository Identity

This repository is meant to become:

- a **beginner-to-advanced C++ path**
- a **software engineering companion track**
- a **design-pattern implementation repo**
- a **UML-backed learning system**
- a **case-study-driven practice repo**
- a **long-term reference for mastering C++ and design**

---

# Main Focus: Learning C++ From Scratch

The central purpose of this repo is to make sure the learner becomes strong in:

- syntax
- types
- references
- `const`
- functions
- control flow
- classes
- object lifecycle
- memory
- RAII
- polymorphism
- STL
- multi-file structure
- debugging
- writing clean, modular C++ code

Software engineering content should reinforce and improve this learning, not distract from it.

---

# How Software Engineering Fits In

Software engineering topics should be integrated only when they naturally support the C++ concepts being learned.

Examples:

## References and const
### C++ focus
- pass by value
- pass by reference
- `const` correctness

### SE connection
- clearer interfaces
- API transparency
- less accidental complexity

---

## Classes and encapsulation
### C++ focus
- class syntax
- constructors
- methods
- private/public members

### SE connection
- encapsulation
- modularity
- cohesion

---

## Inheritance and polymorphism
### C++ focus
- inheritance
- virtual functions
- abstract base classes
- `override`

### SE connection
- Liskov Substitution Principle
- Open/Closed Principle
- polymorphic design

---

## Multi-file project structure
### C++ focus
- headers
- implementation files
- build systems
- code organization

### SE connection
- modularity
- cohesion
- coupling
- maintainability

---

# Rule for Lesson Design

Every lesson should begin with these two sections:

## Primary C++ Goal
A short statement of the exact C++ concept being learned.

## Software Engineering Connection
A short statement of the SE concept that the lesson reinforces.

This format is required because it preserves the correct priority.

---

# Learning Progression

The repository should be built in stages.

---

# Stage A — Core C++ Foundations

This is the highest priority stage.  
The learner should become comfortable writing C++ before heavy design material is introduced.

## Lessons in this stage
1. C++ foundations
2. variables, types, const, references
3. functions and decomposition
4. control flow and loops
5. classes and encapsulation
6. strings, vectors, and collections
7. pointers and dynamic memory basics
8. RAII and smart pointers
9. inheritance and polymorphism
10. STL and algorithms
11. exceptions, assertions, and debugging
12. file I/O and multi-file program structure

## Goal of this stage
The learner should be able to write and understand real C++ programs confidently.

---

# Stage B — C++ Design Fundamentals

This stage introduces software engineering ideas after the learner has enough C++ to understand them properly.

## Lessons in this stage
13. cohesion, coupling, and modularity
14. Law of Demeter
15. SOLID overview
16. Open/Closed Principle
17. Liskov Substitution Principle
18. Dependency Inversion Principle
19. Single Responsibility Principle and Interface Segregation Principle
20. essential vs accidental complexity
21. extension and contraction

## Goal of this stage
The learner should understand what makes a C++ design clean, maintainable, and extensible.

---

# Stage C — Architecture and Design Patterns

Patterns come after the learner already understands classes, inheritance, polymorphism, and modular design.

## Lessons in this stage
22. MVC
23. Singleton
24. Abstract Factory
25. Adapter
26. Decorator
27. Façade
28. Composite
29. Proxy
30. Observer
31. Visitor
32. Chain of Responsibility
33. Command

## Goal of this stage
The learner should be able to implement and explain major design patterns in C++.

---

# Stage D — Theory and Formal Reasoning

Formal topics should come after the learner has enough programming maturity to benefit from them.

## Lessons in this stage
34. models of computation
35. Petri Nets
36. proof of correctness

## Goal of this stage
The learner should be able to connect practical software construction to formal reasoning and system models.

---

# Stage E — Capstones

Capstones integrate everything learned so far.

## Capstones
37. Maze Game architecture
38. messy system refactor

## Goal of this stage
The learner should be able to apply C++, software engineering principles, design patterns, UML, and reasoning in larger systems.

---

# Required Early C++ Coverage

Because the repository is teaching C++ from scratch, the following topics must not be skipped or rushed:

- variables and types
- `const`
- references
- functions
- control flow
- loops
- classes
- constructors/destructors
- strings and vectors
- pointers
- memory basics
- smart pointers
- inheritance
- polymorphism
- STL basics
- file organization
- debugging

These form the real foundation of the repository.

---

# Software Engineering Topics to Integrate

These topics should appear progressively as the C++ base grows:

- modularity
- MVC
- cohesion
- coupling
- Law of Demeter
- inheritance
- polymorphism
- SOLID principles
- essential vs accidental complexity
- extension/contraction
- UML diagrams
- Maze Game examples
- design tradeoff discussions

---

# Design Patterns to Implement

These patterns should be implemented only after the learner has the required C++ background.

## Creational
- Abstract Factory
- Singleton

## Structural
- Adapter
- Decorator
- Façade
- Composite
- Proxy

## Behavioral
- Observer
- Visitor
- Chain of Responsibility
- Command

---

# Case Study Requirement: Maze Game

The Maze Game should act as the recurring case study for the repository.

It should not dominate the beginner lessons too early, but it should become a major thread later.

## Maze Game should be used for:
- inheritance and polymorphism examples
- MVC architecture
- Abstract Factory
- Observer
- Visitor
- Command
- Composite
- possibly Façade

## Why this matters
Using the same recurring case study helps connect separate lessons into one coherent design story.

---

# UML Requirement

UML should support the design-heavy parts of the repository.

It should be introduced as a communication tool, not as a replacement for code.

## UML should be included especially for:
- class relationships
- architecture diagrams
- pattern structure diagrams
- sequence diagrams for behavior-heavy lessons
- state/process diagrams where appropriate

## Typical UML types to use
- class diagrams
- sequence diagrams
- package diagrams
- state diagrams

---

# Definition of a Good Lesson

A lesson is considered good if it does all of the following:

1. teaches a clear C++ concept
2. includes working C++ code
3. explains why the code matters
4. connects the code to a software engineering idea when appropriate
5. includes exercises
6. includes common mistakes
7. builds naturally on previous lessons

A lesson should never feel like random theory detached from actual C++ programming.

---

# Standard Lesson Template

Each lesson should follow a consistent structure.

## Required sections
- lesson overview
- primary C++ goal
- software engineering connection
- key concepts
- annotated examples
- build/run instructions
- common mistakes
- exercises
- stretch exercises
- connection to previous lessons

---

# Recommended Repository Structure

```text
CPlusPlusSE/
├── README.md
├── projectstructure.md
├── sourceoftruth.md
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
│   ├── 04-control-flow-loops/
│   ├── 05-classes-encapsulation/
│   ├── 06-strings-vectors-collections/
│   ├── 07-pointers-memory-basics/
│   ├── 08-raii-smart-pointers/
│   ├── 09-inheritance-polymorphism/
│   ├── 10-stl-algorithms/
│   ├── 11-exceptions-assertions-debugging/
│   ├── 12-file-io-multi-file-programs/
│   ├── 13-cohesion-coupling-modularity/
│   ├── 14-law-of-demeter/
│   ├── 15-solid-overview/
│   ├── 16-open-closed-principle/
│   ├── 17-liskov-substitution-principle/
│   ├── 18-dependency-inversion-principle/
│   ├── 19-srp-isp/
│   ├── 20-essential-vs-accidental-complexity/
│   ├── 21-extension-contraction/
│   ├── 22-mvc/
│   ├── 23-singleton/
│   ├── 24-abstract-factory/
│   ├── 25-adapter/
│   ├── 26-decorator/
│   ├── 27-facade/
│   ├── 28-composite/
│   ├── 29-proxy/
│   ├── 30-observer/
│   ├── 31-visitor/
│   ├── 32-chain-of-responsibility/
│   ├── 33-command/
│   ├── 34-models-of-computation/
│   ├── 35-petri-nets/
│   └── 36-proof-of-correctness/
│
└── capstones/
    ├── 37-maze-game-architecture/
    └── 38-mini-system-refactor/