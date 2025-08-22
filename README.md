# C++ Experiment 10: Call by Value, Pass by Reference and Call by Reference

---

## Aim
- To understand and implement **Call by Value**, **Pass by Reference**, and **Call by Reference** in C++.
- To study how variables are passed to functions and how changes inside functions affect the original variables.
- To compare the advantages and limitations of each approach.
- To demonstrate the usefulness of **pointers** in function calls and memory manipulation.

---

## Tools Used
VS Code
---

## Objectives
- To learn different parameter passing mechanisms in C++.
- To analyze how function calls behave in terms of memory and scope.
- To implement swapping of variables using all three techniques.
- To study pointers and their storage in memory.
- To explore real-world and industrial applications of these concepts.

---

## Theory

### What is a Pointer?
- A **pointer** is a special type of variable that stores the **address** of another variable.
- Instead of storing data directly, it points to the memory location where the data is stored.
- Pointers are powerful because they allow **direct memory access**, **dynamic allocation**, and **efficient function parameter passing**.

### How to Declare a Pointer
- Syntax:  
  ```cpp
  datatype *pointer_name;
  ```
  Example:
  ```cpp
  int x = 10;
  int *p = &x;   // p stores the address of x
  ```

### How Pointers are Stored in Memory
- A pointer itself occupies memory (usually 4 bytes in 32-bit systems, 8 bytes in 64-bit).
- The value stored in the pointer is the **memory address** of another variable.
- Dereferencing (`*p`) allows accessing the value at the stored address.

### Scope of Variables
- **Local variables**: Exist only inside a function. Destroyed when function ends.
- **Global variables**: Declared outside functions. Accessible throughout the program.
- **Static variables**: Retain their values across multiple function calls.
- **Pointers** extend scope by allowing access to variables even outside the current block (through addresses).

### Call by Value
- A **copy** of the actual variable is passed to the function.
- Changes made inside the function do not affect the original variable.
- Safe, but uses more memory if large data is copied.

### Call by Address (Using Pointers)
- The **address** of variables is passed to the function.
- Changes made inside the function directly affect the original variables.
- Efficient for large data handling.

### Call by Reference (Using Reference Variable)
- An **alias** (reference) of the variable is passed.
- Function works directly on the original variable.
- Similar effect as call by address but with simpler syntax.

### Advantages of Using Pointers
- Direct access to memory locations.
- Enable dynamic memory allocation.
- Allow efficient parameter passing without copying data.
- Provide flexibility in implementing data structures (linked lists, trees, graphs).
- Useful in system-level programming like device drivers, memory management, etc.

---

## Difference Between Call Types

| Feature             | Call by Value                    | Call by Address (Pointer)    | Call by Reference           |
|---------------------|----------------------------------|------------------------------|-----------------------------|
| What is Passed      | Copy of value                   | Address of variable          | Alias of variable           |
| Changes in Function | Do not affect original variable | Affect original variable     | Affect original variable    |
| Memory Usage        | More (due to copying)           | Less                         | Less                        |
| Syntax              | `swap(a, b);`                   | `swap(&a, &b);`              | `swap(a, b);`               |
| Safety              | Safe                            | Needs care with addresses    | Safe and easier than pointer|

---

## Industrial Applications
- **Call by Value**
  - Used in situations where original data must not be modified (e.g., mathematical libraries, simulation models).
- **Call by Address (Pointers)**
  - Common in **system programming**, memory management, hardware drivers.
  - Efficient in handling large datasets, arrays, or when passing objects.
- **Call by Reference**
  - Used in **object-oriented programming** to pass objects safely.
  - Common in real-world software like inventory management (update stock count), banking systems (update account balance).
- **General Pointer Use**
  - Embedded systems for sensor and actuator control.
  - Industrial robotics (dynamic allocation of task queues).
  - Networking (buffer handling, memory optimization).

---

## Memory Representation of Pointer
```
int a = 5;
int *p = &a;

+---------+        +-------------------+
|  a = 5  | <----  | p = 0x1001 (addr) |
+---------+        +-------------------+
```
- Variable `a` stores the value.
- Pointer `p` stores the address of `a`.
- `*p` (dereferencing) gives the value stored at address `a`.

---

## Algorithms

**Program 1: Call by Value**
- Start
- Declare function `swap(int x, int y)`
- Copy values of arguments into `x` and `y`
- Swap within the function
- Print values inside function
- End function
- In `main`, print `a` and `b` again (no change observed)
- Stop

**Program 2: Call by Address (Using Pointer)**
- Start
- Declare function `swap(int *x, int *y)`
- Access and swap values at addresses
- Print values inside function
- End function
- In `main`, print `a` and `b` again (values swapped)
- Stop

**Program 3: Call by Reference**
- Start
- Declare function `swap(int &x, int &y)`
- Swap directly using references
- Print values inside function
- End function
- In `main`, print `a` and `b` again (values swapped)
- Stop

---

## Concepts Used
- Function definitions and parameter passing.
- Pointers and memory addressing.
- Reference variables in C++.
- Swapping values using different call types.
- Scope of variables (local, global, static).
- Encapsulation of logic inside functions.
- Industrial relevance of pointers and references in software design.

---
