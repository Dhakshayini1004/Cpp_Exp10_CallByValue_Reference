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

--- 

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

---

### How Pointers are Stored in Memory
- A pointer itself occupies memory (usually 4 bytes in 32-bit systems, 8 bytes in 64-bit).
- The value stored in the pointer is the **memory address** of another variable.
- Dereferencing (`*p`) allows accessing the value at the stored address.

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

### Scope of Variables
- **Local variables**: Exist only inside a function. Destroyed when function ends.
- **Global variables**: Declared outside functions. Accessible throughout the program.
- **Static variables**: Retain their values across multiple function calls.
- **Pointers** extend scope by allowing access to variables even outside the current block (through addresses).

---

### Call by Value
- A **copy** of the actual argument is created in the function’s formal parameter.  
- Any modification inside the function **does not affect** the original variable.  
- Extra memory is consumed because of duplication.  
- Safer to use because original data remains intact.  
- Slower for large data types (like arrays, structures, objects) due to copying overhead.  
- Useful when you only need the function to **use values temporarily** without altering them.  

**Diagram:**  
```
Main (a=5, b=2)             Function (x=5, y=2)
+----+                      +----+
| a  | 5   ----copy---->    | x  | 5
+----+                      +----+
| b  | 2   ----copy---->    | y  | 2
+----+                      +----+
```

---

### Call by Reference
- Function receives the **address** of the actual variables (commonly through pointers).  
- Any change inside the function **directly updates** the original variable.  
- More efficient since no copy is created.  
- Requires explicit pointer handling (`*` for dereference, `&` for address).  
- Can sometimes make code less readable and more error-prone if pointers are mishandled.  
- Very useful when working with **arrays, dynamic memory, or large data**.  
- Allows the function to return **multiple values** via parameters.  

**Diagram:**  
```
Main (a=5, b=2)             Function (x→a, y→b)
+----+                      +----+
| a  | 5 <----address----   | x  | ----+
+----+                      +----+     |
| b  | 2 <----address----   | y  | ----+
+----+                      +----+
```

---

### Pass by Reference
- Uses **reference variables (`&`)** in function parameters.  
- Reference acts as an **alias** to the actual variable.  
- Any changes to the parameter inside the function are **directly reflected** in the original variable.  
- Cleaner and easier syntax than pointers — no need for dereferencing.  
- Avoids extra memory usage since no copy is created.  
- Safer than raw pointers because reference variables cannot be NULL.  
- Provides **both efficiency and readability** in modern C++.  

**Diagram:**  
```
Main (a=5, b=2)             Function (x≡a, y≡b)
+----+                      +----+
| a  | 5  <---alias------   | x  | (alias of a)
+----+                      +----+
| b  | 2  <---alias------   | y  | (alias of b)
+----+                      +----+
```

---

### Comparison Table

| Feature                  | Call by Value                  | Call by Reference (Pointers)         | Pass by Reference (References)  |
|---------------------------|--------------------------------|--------------------------------------|---------------------------------|
| Memory usage              | Extra copy created             | No copy, works on original variable  | No copy, works on original variable |
| Syntax                    | Simple                         | Complex (`*` and `&` needed)         | Simple (just `&` in parameter)  |
| Safety                    | Safe (original unaffected)     | Risky if pointers misused            | Safer than pointers             |
| Efficiency                | Less efficient for large data  | Efficient                            | Efficient                       |
| Use case                  | When modification not needed   | When direct manipulation required    | When modification required, but cleaner |
| Multiple return values    | Not possible                   | Possible via pointers                | Possible via references          |


---

## Industrial Application

- **Call by Value**  
  - Commonly used in applications where data safety is more important than efficiency.  
  - Example: Banking software functions where user account details should not be accidentally modified (like calculating interest or displaying balance).  
  - Industrial use in **financial reporting systems**, **data analytics tools**, and **read-only operations** where only copies of data are processed.  

- **Call by Reference (using pointers)**  
  - Widely applied in **embedded systems and device drivers** where memory efficiency and direct hardware access are crucial.  
  - Example: Interfacing with sensors, motors, or IoT devices where the function must update actual device status directly.  
  - Industrial use in **real-time systems**, **automobile electronics**, **medical devices**, and **robotics**.  

- **Pass by Reference (using reference variables)**  
  - Often used in **large-scale software projects** where objects and structures are passed to functions without making copies.  
  - Example: Game development engines (like Unreal, Unity with C++ backends) where passing large graphics objects by reference improves performance.  
  - Industrial use in **simulation software**, **CAD applications**, **aerospace systems**, and **telecom applications** to reduce overhead.  


---

## Algorithm
### Call by Value
1. Start.  
2. Declare variables in the main function.  
3. Call the function by passing the values of the variables.  
4. In the function, the **formal parameters** receive a **copy** of the actual values.  
5. Perform operations inside the function.  
6. Since only copies are modified, the actual variables in `main` remain unchanged.  
7. End.  

---

### Call by Reference (using pointers)
1. Start.  
2. Declare variables in the main function.  
3. Call the function by passing the **addresses** of the variables.  
4. In the function, formal parameters are **pointers** that point to the actual variables.  
5. Perform operations by dereferencing the pointers (`*ptr`).  
6. Changes are directly reflected in the actual variables in `main`.  
7. End.  

---

### Pass by Reference (using reference variables)
1. Start.  
2. Declare variables in the main function.  
3. Call the function by passing the variables normally (no `&` in call).  
4. In the function definition, the **reference variables** (`&`) act as aliases of the actual variables.  
5. Perform operations on the reference variables.  
6. Any changes made inside the function directly affect the actual variables in `main`.  
7. End.  

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
