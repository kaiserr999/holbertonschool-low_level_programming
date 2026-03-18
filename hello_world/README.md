# C - Hello, World

This project introduces the basics of C programming, including compilation process, basic syntax, and fundamental concepts.

## Learning Objectives

- Understanding the C compilation process (preprocessing, compilation, assembly, linking)
- Learning basic C syntax and structure
- Using printf and puts functions
- Understanding different compilation stages
- Working with the GCC compiler

## Files

| File | Description |
|------|-------------|
| `0-preprocessor` | Script that runs a C file through the preprocessor and saves the result |
| `1-compiler` | Script that compiles a C file but does not link |
| `2-assembler` | Script that generates the assembly code of a C file |
| `3-name` | Script that compiles a C file and creates an executable named cisfun |
| `4-puts.c` | C program that prints exactly a string using puts |
| `5-printf.c` | C program that prints exactly a string using printf |
| `6-size.c` | C program that prints the size of various types |

## Compilation Examples

```bash
# Preprocessing
./0-preprocessor main.c

# Compilation without linking
./1-compiler main.c

# Generate assembly code
./2-assembler main.c

# Compile and create executable
./3-name main.c

# Compile individual programs
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c -o printf
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c -o size
```

## Author

Student at Holberton School
