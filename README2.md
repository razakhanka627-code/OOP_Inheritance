 Bank Account System (OOP in C++)
 
Overview

This project demonstrates key **Object-Oriented Programming (OOP)** concepts in C++ by modeling a simple bank account system.

It focuses on:

* **Multilevel Inheritance**
* **Constructor Chaining**
* **Encapsulation (Private Data + Getters)**

The system consists of three classes:

* `Account`
* `SavingsAccount`
* `PremiumSavings`


 Concepts Used
 1. Inheritance

This project uses **multilevel inheritance**:
Account → SavingsAccount → PremiumSavings

2. Constructor Chaining

Each derived class calls its parent constructor using an initializer list.

Example:
cpp
SavingsAccount(int accNo, int bal) : Account(accNo)

This ensures that all parent data is initialized correctly.

3. Encapsulation

* All data members are declared **private**
* Access is controlled using **getter functions**
* Direct access from outside the class is not allowed

Class Structure
 Class: Account

* **Private Member:**

  * `accountNumber`
* **Constructor:**

  * Initializes account number
* **Function:**

  * `getAccountNumber()` → returns account number

Class: SavingsAccount (inherits Account)

* **Private Member:**

  * `balance`
* **Constructor:**

  * Takes `accountNumber` and `balance`
  * Calls `Account` constructor
* **Function:**

  * `getBalance()` → returns balance

 Class: PremiumSavings (inherits SavingsAccount)

* **Private Member:**

  * `interestRate`
* **Constructor:**

  * Takes all values (`accountNumber`, `balance`, `interestRate`)
  * Calls `SavingsAccount` constructor
* **Function:**

  * `display()` → prints all account details


 How It Works

1. A `PremiumSavings` object is created
2. Constructor chain executes:

   * `Account` constructor
   * `SavingsAccount` constructor
   * `PremiumSavings` constructor
3. Data is accessed using getter functions
4. `display()` shows all information


 Learning Outcome

After completing this project, you will understand:

* How multilevel inheritance works
* How to pass values through constructor chaining
* How to protect data using encapsulation
* How to build real-world OOP systems

 Requirements

* C++ Compiler (GCC / Dev C++ / Visual Studio)


 Author

Ali Raza
BS Computer Science Student 

---

 Note

This project is part of OOP practice and is useful for students preparing for exams, viva, and coding interviews.
