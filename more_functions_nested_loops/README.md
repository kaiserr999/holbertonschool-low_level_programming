# C - More functions, more nested loops

This project extends the previous concepts with more advanced functions and nested loop patterns.

## Learning Objectives

- Understanding nested loops in depth
- Creating more complex functions
- Working with mathematical operations
- Implementing pattern printing algorithms
- Understanding function parameters and return values

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing all function prototypes |
| `0-isupper.c` | Function that checks for uppercase character |
| `1-isdigit.c` | Function that checks for a digit (0 through 9) |
| `2-mul.c` | Function that multiplies two integers |
| `3-print_numbers.c` | Function that prints numbers from 0 to 9 |
| `4-print_most_numbers.c` | Function that prints numbers 0-9 except 2 and 4 |
| `5-more_numbers.c` | Function that prints numbers 0-14 ten times |
| `6-print_line.c` | Function that draws a straight line using underscore |
| `7-print_diagonal.c` | Function that draws a diagonal line using backslashes |
| `8-print_square.c` | Function that prints a square using hash characters |
| `9-fizz_buzz.c` | Program that prints Fizz-Buzz from 1 to 100 |
| `10-print_triangle.c` | Function that prints a triangle using hash characters |

## Function Prototypes

```c
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
```

## Key Concepts

### Pattern Printing
- Lines: Using loops to print repeated characters
- Diagonals: Combining spaces and characters
- Squares: Using nested loops for 2D patterns
- Triangles: Progressive pattern building

### Fizz Buzz Logic
```c
// Print numbers 1-100, but:
// "Fizz" for multiples of 3
// "Buzz" for multiples of 5  
// "FizzBuzz" for multiples of both 3 and 5
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [files] -o [output_name]
```

## Usage Examples

```bash
# Test isupper function
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-isupper.c -o isupper

# Compile and run Fizz-Buzz
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-fizz_buzz.c -o fizz_buzz
./fizz_buzz
```

## Author

Student at Holberton School
