# Math Engine

**Math Engine** is a modular C project designed for learning Git workflow, branching, and version management while building a small but extendable mathematical engine.  
It includes basic arithmetic, algebra functions, utilities, and is structured to allow easy addition of new features or components.

---

## Table of Contents
1. [Project Overview](#project-overview)
2. [Features](#features)
3. [Project Structure](#project-structure)
4. [Build & Run](#build--run)
5. [Git Workflow](#git-workflow)
6. [Contributing](#contributing)

---

## Project Overview
Math Engine is a simple, modular C application demonstrating:

- Arithmetic operations: addition, subtraction, multiplication, division  
- Algebra: quadratic solver, matrix addition  
- Utility functions: logging, user input handling  
- Modular folder structure suitable for feature and component branching  

This project is also designed for Git practice: branching, merging, and semantic versioning.

---

## Features
- Basic arithmetic: `add`, `sub`, `mul`, `divide`  
- Algebra module: `solve_quadratic`, `matrix_add`  
- Utilities: `log_msg` and `get_integer`  
- Modular codebase: easy to add new modules like statistics, geometry, etc.  
- Example programs demonstrating functionality  
- Multi-branch Git workflow: `main`, `development`, `feature/*`, `component/*`

---

## Project Structure
math_engine/
.
├── include
│   ├── algebra.h
│   ├── arithmetic.h
│   ├── input.h
│   └── logger.h
├── Makefile
├── README.md
└── src
    ├── algebra
    │   ├── matrix.c
    │   └── quadratic.c
    ├── arithmetic
    │   ├── add.c
    │   ├── div.c
    │   ├── mul.c
    │   └── sub.c
    ├── main.c
    └── utils
        ├── input.c
        └── logger.c
---

Development branch initialized for active development.

## Versioning
The project uses semantic versioning (MAJOR.MINOR.PATCH).
Current version is stored in the VERSION file.

