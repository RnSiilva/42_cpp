🚀 C++ Modules - 42 Network

This repository contains the C++ module series from 42 Network, focused on transitioning from procedural programming (C) to Object-Oriented Programming (CPP), exploring everything from basic syntax to advanced STL usage.

---

## 📚 Modules Overview

| Module | Main Focus | Key Concepts |
| :--- | :--- | :--- |
| **CPP 00** | Namespaces & Classes | Basic syntax, std::cout, std::cin, and class instantiation. |
| **CPP 01** | Memory & Pointers | Allocation (new/delete), references, and pointers to members. |
| **CPP 02** | Ad-hoc Polymorphism | Operator overloading and the **Orthodox Canonical Form**. |
| **CPP 03** | Inheritance | Class hierarchy (ClapTrap, ScavTrap, FragTrap). |
| **CPP 04** | Subtype Polymorphism | Abstract classes, interfaces, and virtual functions. |
| **CPP 05** | Exceptions | Try/catch blocks and custom exception classes. |
| **CPP 06** | Casts | Type conversion using static_cast, dynamic_cast, etc. |
| **CPP 07** | Templates | Generic programming with function and class templates. |
| **CPP 08** | Containers & Iterators | STL algorithms, lists, vectors, and maps. |
| **CPP 09** | Advanced STL | Complex problem solving (Bitcoin, PmergeMe) using STL. |

---

## 🛠️ Requirements (C++98)

All modules must be compliant with the **C++98 standard**.
- No external libraries (C++11 and later are forbidden).
- The **Orthodox Canonical Class Form** is mandatory from Module 02 onwards:
    1. Default constructor
    2. Copy constructor
    3. Copy assignment operator
    4. Destructor

---

## 💻 Compilation

Each module (and often each exercise) has its own `Makefile`. To compile and run:

```bash
make
./program_name
