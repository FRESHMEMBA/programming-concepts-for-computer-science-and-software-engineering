# Data Types

## 🧠 Introduction

One of the reasons computers are so powerful and versatile is their ability to work with different kinds of data. Today, virtually every field — from healthcare to entertainment, finance to AI — relies on computers to process information in meaningful ways.

This versatility is possible because computers understand and manipulate **various types of data**: numbers, text, characters, audio, images, video, and more.

In this section, we’ll focus on the **fundamental data types** used in programming, especially in the context of **software engineering and computer science**. These are the building blocks that allow us to model the world in code.

We’ll explore:

- **Numeric types** – integers, floating-point numbers (e.g., `int`, `float`, `double`)
- **Character and string types** – for working with text and symbols
- **Boolean types** – for true/false logic (`bool`)
- **Pointer types** – memory addresses that reference other data (especially in C/C++)
- **Enumerations (enums)** – user-defined types representing fixed sets of values

Each data type serves a purpose — knowing when and how to use them is key to writing efficient, correct, and expressive programs.

---

## 🔢 Numeric Data Types

Numeric types allow us to represent numbers — whether for counting, measuring, calculating, or indexing.

### 🧮 Integers

Integers are whole numbers (positive, negative, or zero) without any decimal points.

Most programming languages use the keyword `int` to define integer values. However, there are several variants of the integer type that differ in **size** (number of bytes), **range**, and whether they are **signed** (can be negative) or **unsigned** (only positive).

#### 🔸 Common Integer Types (C, C++, Java, C#)

| Type    | Typical Size (32-bit system) | Range (Signed)                 | Notes |
|---------|------------------------------|--------------------------------|-------|
| `byte`  | 1 byte (8 bits)              | -128 to 127                    | Available in Java, C# — not standard in C/C++ |
| `short` | 2 bytes (16 bits)            | -32,768 to 32,767              | Used for memory-constrained cases |
| `int`   | 4 bytes (32 bits)            | -2,147,483,648 to 2,147,483,647 | Default integer type in most languages |
| `long`  | 8 bytes (64 bits)            | ~-9 quintillion to 9 quintillion | Use for large numbers |

> 📌 **Note**: The actual size of each type can vary depending on the language and system architecture. For example, in C and C++, the size of `int` is implementation-defined, although it's typically 4 bytes on modern systems.

#### ⚠️ Integer Overflow

If you assign a value that exceeds the allowed range for a type (e.g., `int x = 3000000000;` in C++), **overflow** occurs. This can lead to:

- Unexpected results (wrapping around into negatives).
- Undefined behavior (especially in C/C++).
- Exceptions or runtime errors (in Java and C# if using checked contexts).

#### 🐍 Python Note

Python handles integers differently. It uses `int`, but it automatically switches from a fixed-size integer to a big integer internally when the number exceeds a typical 32-bit or 64-bit size.

```python
x = 99999999999999999999999999
print(x)  # No overflow; Python handles large ints gracefully
```

## 🌊 Floating-Point Data Types

Floating-point types are used to represent **real numbers** — numbers that have a fractional part (decimal point), such as `3.14`, `-0.001`, or `2.0e6` (that is 2.0⁶).

These types are essential for calculations that require precision, such as in scientific computing, graphics, simulations, and financial applications.

### 🔸 Common Floating-Point Types (C, C++, Java, C#, Python)

| Type      | Typical Size      | Precision         | Example Values        | Notes                                  |
|-----------|-------------------|-------------------|------------------------|----------------------------------------|
| `float`   | 4 bytes (32 bits) | ~6–7 decimal digits | `3.14f`, `-0.1f`       | Use `f` suffix in C/C++/C# to indicate float |
| `double`  | 8 bytes (64 bits) | ~15–16 decimal digits | `3.14159265`, `2e10`   | Default floating-point type in most languages |
| `decimal` | 16 bytes (128 bits) | ~28–29 decimal digits | `3.141592653589793238` | C#/Python only; useful for high-precision finance calculations |

> ✅ **Python Note**: Python uses `float` as the default for real numbers, which is equivalent to a C-style `double`.

### 🔬 Precision vs. Accuracy

Floating-point numbers are **approximations**, not exact representations. Due to how they are stored in binary, some numbers can't be represented exactly, which can lead to small rounding errors.

```c
#include <stdio.h>

int main() {
    float a = 0.1 + 0.2;
    printf("%.20f\n", a); // Might print: 0.30000001192092896
    return 0;
}
```

---

## 🔤 Text Data Types

Characters and strings are essential for working with **textual data** — from names and messages to file paths and programming language symbols.

### 🔹 Characters

A **character** represents a single symbol, such as `'A'`, `'9'`, `'#'`, or `'z'`. Most languages store characters using a specific numeric encoding like **ASCII** or **Unicode** (UTF-8, UTF-16, etc.).

| Language | Keyword | Size      | Notes                                  |
|----------|---------|-----------|----------------------------------------|
| C/C++    | `char`  | 1 byte    | ASCII by default; `wchar_t` for wide Unicode chars |
| Java     | `char`  | 2 bytes   | Uses UTF-16 (supports full Unicode)    |
| C#       | `char`  | 2 bytes   | Unicode by default (UTF-16)            |# Data Types

