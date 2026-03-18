# C - Pointers, arrays and strings

This project introduces pointers, arrays, and string manipulation in C programming.

## Learning Objectives

- Understanding what pointers are and how to use them
- Learning about arrays and their relationship with pointers
- Understanding string manipulation in C
- Working with memory addresses
- Learning pointer arithmetic
- Understanding the difference between arrays and pointers

## Files

### Pointers and Basic Operations
| File | Description |
|------|-------------|
| `main.h` | Header file containing all function prototypes |
| `_putchar.c` | Function that writes a character to stdout |
| `0-reset_to_98.c` | Function that updates pointer value to 98 |
| `1-swap.c` | Function that swaps values of two integers using pointers |

### String Functions
| File | Description |
|------|-------------|
| `2-strlen.c` | Function that returns the length of a string |
| `3-puts.c` | Function that prints a string to stdout |
| `4-print_rev.c` | Function that prints a string in reverse |
| `5-rev_string.c` | Function that reverses a string |
| `6-puts2.c` | Function that prints every other character of a string |
| `7-puts_half.c` | Function that prints half of a string |
| `8-print_array.c` | Function that prints n elements of an array of integers |
| `9-strcpy.c` | Function that copies a string |

### Advanced String Operations
| File | Description |
|------|-------------|
| `0-strcat.c` | Function that concatenates two strings |
| `1-strncat.c` | Function that concatenates two strings with byte limit |
| `2-strncpy.c` | Function that copies a string with byte limit |
| `3-strcmp.c` | Function that compares two strings |
| `4-rev_array.c` | Function that reverses an array of integers |
| `5-string_toupper.c` | Function that changes lowercase letters to uppercase |
| `6-cap_string.c` | Function that capitalizes all words in a string |
| `7-leet.c` | Function that encodes a string into 1337 |

### Memory Functions
| File | Description |
|------|-------------|
| `0-memset.c` | Function that fills memory with a constant byte |
| `1-memcpy.c` | Function that copies memory area |
| `2-strchr.c` | Function that locates a character in a string |
| `3-strspn.c` | Function that gets the prefix length of a substring |
| `4-strpbrk.c` | Function that searches a string for any of a set of bytes |
| `5-strstr.c` | Function that locates a substring |
| `7-print_chessboard.c` | Function that prints a chessboard |
| `8-print_diagsums.c` | Function that prints the sum of diagonals of a matrix |

### Advanced Functions
| File | Description |
|------|-------------|
| `100-atoi.c` | Function that converts a string to an integer |

## Key Concepts

### Pointers
```c
int n = 10;
int *p = &n;  // p points to the address of n
*p = 20;      // Changes the value of n to 20
```

### Arrays and Strings
```c
char str[] = "Hello";    // Array of characters
char *ptr = "World";     // Pointer to string literal
```

### Pointer Arithmetic
```c
int arr[] = {1, 2, 3, 4, 5};
int *p = arr;
p++;  // Points to the next element
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [files] -o [output_name]
```

## Usage Examples

```bash
# Test pointer functions
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-reset_to_98.c -o reset

# Test string functions
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-strlen.c -o strlen

# Test memory functions
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-memset.c -o memset
```

## Author

Student at Holberton School
