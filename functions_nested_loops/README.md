# C - Functions, nested loops

This project focuses on creating and using functions in C, understanding nested loops, and working with header files.

## Learning Objectives

- Understanding what functions are and how to use them
- Learning the difference between declaration and definition
- Understanding function prototypes
- Working with header files and the #include preprocessor directive
- Implementing nested loops
- Understanding scope of variables

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing all function prototypes |
| `_putchar.c` | Function that writes a character to stdout |
| `0-putchar.c` | Program that prints "_putchar" |
| `1-alphabet.c` | Function that prints the alphabet in lowercase |
| `2-print_alphabet_x10.c` | Function that prints the alphabet 10 times |
| `3-islower.c` | Function that checks for lowercase character |
| `4-isalpha.c` | Function that checks for alphabetic character |
| `5-sign.c` | Function that prints the sign of a number |
| `6-abs.c` | Function that computes absolute value of an integer |
| `7-print_last_digit.c` | Function that prints the last digit of a number |
| `8-24_hours.c` | Function that prints every minute of the day |
| `9-times_table.c` | Function that prints the 9 times table |
| `10-add.c` | Function that adds two integers |
| `11-print_to_98.c` | Function that prints numbers from n to 98 |

## Function Prototypes

```c
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [main_file] [function_files] -o [output_name]
```

## Usage Examples

```bash
# Compile with _putchar function
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-putchar.c _putchar.c -o putchar

# Compile alphabet function
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-alphabet.c _putchar.c -o alphabet
```

## Author

Student at Holberton School
