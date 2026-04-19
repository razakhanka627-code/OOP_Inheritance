# University System (OOP in C++)

## Overview

This project demonstrates **Object-Oriented Programming (OOP)** concepts in C++, specifically:

* **Inheritance (Multilevel)**
* **Constructor Chaining**
* **Encapsulation (Private Members + Getters)**

The system models a simple university structure using three classes:

* `Person`
* `Student`
* `GraduateStudent`

---

## Concepts Used

### 1. Inheritance

We use **multilevel inheritance**:

* `Student` inherits from `Person`
* `GraduateStudent` inherits from `Student`

---

### 2. Constructor Chaining

Each class constructor calls its parent constructor using an **initializer list**.

Example:

```cpp
Student(string n, int m) : Person(n)
```

This ensures proper initialization from parent to child.

---

### 3. Encapsulation

* All data members are declared **private**
* Access is provided using **getter functions**
* Direct access to variables is restricted

---

## Class Structure

### Class: Person

* **Private Member:**

  * `name`
* **Constructor:**

  * Initializes name
* **Function:**

  * `getName()` → returns name

---

### Class: Student (inherits Person)

* **Private Member:**

  * `marks`
* **Constructor:**

  * Initializes name (via Person) and marks
* **Function:**

  * `getMarks()` → returns marks

---

###  Class: GraduateStudent (inherits Student)

* **Private Member:**

  * `researchTopic`
* **Constructor:**

  * Initializes name, marks, and research topic
* **Function:**

  * `display()` → prints all details

---



## How It Works

1. `GraduateStudent` object is created
2. Constructor chain is executed:

   * `Person` constructor
   * `Student` constructor
   * `GraduateStudent` constructor
3. Data is accessed using getter functions
4. `display()` prints the final result

---

## Learning Outcome

After this project, you will understand:

* How inheritance works in real programs
* Why constructor chaining is important
* How to protect data using encapsulation
* How to design clean and modular C++ classes

---

## Requirements

* C++ Compiler (GCC / CodeBlocks / Visual Studio)

---

## Author

Ali Raza
BS Computer Science Student 🚀

---

## Note

This project is designed for **learning OOP concepts** and is ideal for beginners who want to strengthen their understanding of inheritance in C++.
