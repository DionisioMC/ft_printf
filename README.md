
*This project has been created as part of the 42 curriculum by dcoelho.*

# ft_printf

## Description

`ft_printf` is a custom implementation of the standard C `printf` function. The goal of this project is to reproduce the core behavior of `printf` for a limited set of built-in conversion specifiers while gaining hands-on experience with variadic functions, format string parsing, and low-level output using the `write` system call.

This version supports the following conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`. It does not implement advanced formatting flags, width, precision, or length modifiers.

## Algorithms and Data Structure

### Chosen algorithm

The implementation uses a single-pass parser that reads the format string sequentially and handles each element in order.

- Normal characters are written directly to output.
- When `%` is encountered, the next character determines the conversion.
- A dedicated handler function is called for each conversion type.
- Each handler function retrieves its argument with `va_arg`, formats the value, and prints the result using `write`.

### Data structure justification

No complex data structures are required for this project. The design relies on:

- A character pointer to traverse the format string.
- A small set of conversion handler functions.
- Primitive C types for values passed through `va_arg`.

This structure is appropriate because `printf` processing is inherently linear. A single-pass parser keeps the implementation simple, efficient, and easy to debug, while the handler-based design separates concerns and makes the code base easier to extend.

## Features

- Character output: `%c`
- String output: `%s`
- Pointer output in hexadecimal: `%p`
- Signed integer output: `%d`, `%i`
- Unsigned integer output: `%u`
- Hexadecimal output: `%x`, `%X`
- Literal percent sign: `%%`

## Instructions

### Compilation

From the project root, run:

```bash
make
```

This command builds the static library `libftprintf.a`.

### Clean

```bash
make clean
```

Removes object files.

```bash
make fclean
```

Removes object files and the library.

```bash
make re
```

Removes object files and the library and then rebuilds the project from scratch.

### Usage

Include the header in your source file:

```c
#include "ft_printf.h"
```

Compile and link with the generated library:

```bash
cc your_file.c libftprintf.a -o your_program
```

Then run your program as usual.

## Resources

- `man 3 printf` — reference for standard `printf` behavior.
- `man 2 write` — details for direct system call output.
- 42 curriculum project subject and instructions.
- Classic C programming references on variadic functions and formatted output.

## AI Usage

AI was used to help structure and write the README file so it fulfills the project documentation requirements. It was only used for documentation support and not for writing code.

