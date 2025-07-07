# Hello World

## 🧑‍💻 Code Breakdown

---

### C

```c
// Prints 'Hello World!' on the screen
```
> **Comment**: Explains what the program does. Comments are ignored by the compiler.
> **Single Line Comment**: Single line comments in C (C++, C#, and Java) are denoted by two forward slashes `//`.
> For example:
> `//This is a single line comment`
> **Multi-Line Comment**: Multi-line comments in C (C++, C#, and Java) span multiple lines and are enclosed in `/*...*/`.
> For example:
> `/*
> This is a multi-line comment.
> It spans across multiple lines,
> and there's no limit to the number of lines it can have.
> */`

```c
#include <stdio.h>
```
> **Preprocessor Directive**: Loads the header file `stdio.h` so you can use `printf()` and other input/output functions.

```c
int main()
```
> **Main Function**: Entry point of every C program.  
> - A *function* completes a task and can return a value.  
> - `int` means `main` will return an integer value to the operating system.
> - () means the function takes no arguments.

```c
{
```
> **Opening Brace**: Starts the body of the `main` function.

```c
printf("Hello World!");
```
> **Printing to Screen**: `printf()` from `stdio.h` prints the text inside the quotes.

```c
return 0;
```
> **Return Statement**: Ends the `main` function; `0` signals success.

```c
}
```
> **Closing Brace**: Ends the `main` function.
> **Note**: All statements in C, C++, C#, and Java must end with a semicolon (`;`).

---

### C++

```cpp
// Prints 'Hello World!' on the screen
```
> **Comment**: Same as C.

```cpp
#include <iostream>
```
> **Header File**: Loads the input/output stream library.

```cpp
int main()
```
> **Main Function**: Entry point of the program.
> **Arguments**: The empty parentheses () mean that main takes no arguments. In other cases, main can take arguments like `int argc, char* argv[]`, which we’ll cover later.

```cpp
{
```
> **Opening Brace**: Starts the `main` function body.

```cpp
std::cout << "Hello World!";
```
> **Output Statement**: Uses `std::cout` and the insertion operator `<<` to print text.

```cpp
return 0;
```
> **Return Statement**: Indicates successful program completion.

```cpp
}
```
> **Closing Brace**: Ends the `main` function.
> **Note**: All statements in C, C++, C#, and Java must end with a semicolon (`;`).

---

### C#

```csharp
// Prints 'Hello World!' on the screen
```
> **Comment**: Same as C/C++.

```csharp
using System;
```
> **Using Directive**: Imports the `System` namespace for `Console`.

```csharp
namespace HelloWorld
```
> **Namespace**: Groups related code.

```csharp
{
```
> **Opening Brace**: Starts the namespace block.

```csharp
class Program
```
> **Class Declaration**: All C# programs are inside classes.

```csharp
{
```
> **Opening Brace**: Starts the class block.

```csharp
public static void Main(string[] args)
```
> **Main Method**: Entry point of a C# console app.

```csharp
{
```
> **Opening Brace**: Starts the `Main` method body.

```csharp
Console.Write("Hello World!");
```
> **Output Statement**: Prints text using `Console.Write`.

```csharp
}
```
> **Closing Brace**: Ends the `Main` method.

```csharp
}
```
> **Closing Brace**: Ends the `Program` class.

```csharp
}
```
> **Closing Brace**: Ends the `HelloWorld` namespace.
> **Note**: All statements in C, C++, C#, and Java must end with a semicolon (`;`).

---

### Java

```java
// Prints 'Hello World!' on the screen
```
> **Comment**: Explains the program.

```java
public class HelloWorld
```
> **Class Declaration**: Java programs must have a class matching the filename.

```java
{
```
> **Opening Brace**: Starts the class body.

```java
public static void main(String[] args)
```
> **Main Method**: Entry point of Java applications.

```java
{
```
> **Opening Brace**: Starts the `main` method body.

```java
System.out.print("Hello World!");
```
> **Output Statement**: Prints text to the console.

```java
}
```
> **Closing Brace**: Ends the `main` method.

```java
}
```
> **Closing Brace**: Ends the `HelloWorld` class.
> **Note**: All statements in C, C++, C#, and Java must end with a semicolon (`;`).

---


### Python

```python
# Prints 'Hello World!' on the screen
```
> **Comment**: In Python, comments start with `#`.

```python
print("Hello World!")
```
> **Output Statement**: Calls the built-in `print()` function.

> **Note**: Python executes code directly from the first line; no explicit `main` is required for simple scripts.

---

## 📖 Concept

The "Hello World" program is the simplest example in any language. It demonstrates:
- The basic syntax of the language.
- How to compile and/or run a program.
- How to output text to the screen.
- How to document code using comments.
- How to import predefined code into a program.

This is a classic starting point for learning any programming language or understanding how the build/run process works.

---

## 📝 Implementations

| Language | File             | How to Run                                  |
|----------|------------------|---------------------------------------------|
| C        | `HelloWorld.c`  | `gcc HelloWorld.c -o hello_c && ./hello_c`    |
| C++      | `HelloWorld.cpp`| `g++ HelloWorld.cpp -o hello_cpp && ./hello_cpp`  |
| C#       | `HelloWorld.cs` | `dotnet new console -o HelloWorld` → Replace `Program.cs` → `dotnet run` |
| Java     | `HelloWorld.java`| `javac HelloWorld.java && java HelloWorld` |
| Python   | `HelloWorld.py` | `python hello_world.py`                    |

---

## 🔑 What I Learned

- How each language structures its simplest program.
- Differences in syntax, case sensitivity, and required boilerplate.
- The basics of compiling or interpreting code in each environment.
- How to set up a small program quickly in each language.

---

## 🚀 Next Steps

After mastering Hello World, the next fundamentals to explore are:
- Data types and variables.
- Reading input from the user.
- Conditional statements and loops.
- Functions and methods.

---

## 📌 Notes

- For Java, the filename **must match** the class name exactly (e.g., `HelloWorld.java` with `public class HelloWorld`).
- For C#, using .NET CLI (`dotnet new console`) creates the recommended project structure for real-world work.
- For compiled languages (C, C++, Java), remember to remove old executables or class files between builds to avoid confusion.

---
