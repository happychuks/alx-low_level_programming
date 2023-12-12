# Introduction to Dynamic Libraries in C

In C programming, a *dynamic library*, also known as a *shared library*, is a compiled binary file containing functions and code that can be used by multiple programs concurrently. Dynamic libraries offer a way to share reusable code among different applications, providing advantages such as modularity, code sharing, and runtime loading.

## Definition

A dynamic library is a binary file containing compiled code and functions that can be loaded into a program at runtime. It is distinguished from static libraries, which are linked at compile-time and become part of the executable.

## Modularity

Dynamic libraries promote modularity by allowing developers to separate their code into independent units. These units, encapsulated within a library, can be reused across multiple programs, facilitating code maintenance and updates.

## Advantages

- **Code Reusability:** Dynamic libraries allow common functionality to be shared among multiple programs without duplicating code.
- **Versioning:** Libraries can be versioned, enabling different programs to use specific versions of a library, ensuring compatibility and backward compatibility.
- **Reduced Memory Usage:** Shared libraries are loaded into memory only when needed, reducing overall memory consumption.

## Creating Dynamic Libraries

Dynamic libraries are typically created by compiling source code into a shared object file (e.g., a file with a `.so` extension on Unix-like systems). The compilation process includes the `-shared` flag to indicate the creation of a shared library.

```bash
gcc -shared -o mylib.so mylib.c
```

# Linking with Dynamic Libraries
To use a dynamic library in a C program, you need to link against it during compilation. The -l flag is used to specify the library name without the lib prefix and the file extension.

```bash
gcc -o myprogram myprogram.c -lmylib
```

# Loading at Runtime
Dynamic libraries are loaded into memory at runtime using functions provided by the operating system, such as dlopen() on Unix-like systems. Functionality within the library can then be accessed through function pointers or dynamically linked symbols.

Dynamic libraries play a crucial role in the development of large-scale software projects by facilitating code organization, reuse, and maintenance. They provide a flexible and efficient means of sharing code among different applications, contributing to the principles of modular and extensible software design.

# Task 0. A library is not a luxury but one of the necessities of life
The steps to create a dynamic library involve writing the source code for your functions, compiling them into an object file, and then linking them into a shared library.
## To Create the dynamic library libdynamic.so containing all the functions listed below:
```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
Step 1: Write the source code for your functions with file extenstion .c 
Step 2: Compile the source code into an object file: Use a compiler to create an object file from your source code.

```bash 
gcc -c -fPIC *.c
```
The -fPIC flag stands for Position Independent Code, which is necessary for creating shared libraries.

Step 3: Create the dynamic library: Link the object file into a shared library.
```bash
gcc -shared -o libdynamic.so *.o
The -shared flag specifies that you are creating a shared library.
```
Now, you should have a dynamic library named libdynamic.so containing the functions from your source code. You can use this library in other programs by linking against it.

# Task 1. Without libraries what have we? We have no past and no future
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
File: ```c 1-create_dynamic_lib.sh```
```bash
#!/bin/bash
gcc -c -fPIC ./*.c (This compiles  the source code into an object file)
gcc -shared -o liball.so ./*.o (This create the dynamic library by linking the object file into a shared library.)
```

# Task 2. Let's call C functions from Python
I know, you’re missing C when coding in Python. So let’s fix that!
Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
Step 1: create a c file with all the necessary functions: ```c maths_operations.c ``` 
Step 2: compile the source code with the maths functions using ```bash gcc -c -fPIC maths_operations.c ```
Step 3: create the shared library by linking to the object file generated using ```bash gcc -shared -0 100_operations.so maths_operations.o ```
Test the dynamic library ```c 100-operations.so ``` library using this python file 100-tests.py
```bash
python3 100-tests.py
```
