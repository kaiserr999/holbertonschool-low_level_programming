# C - Variadic functions

This project introduces variadic functions in C programming, demonstrating how to create functions that accept a variable number of arguments.

## Learning Objectives

- Understanding what variadic functions are and how to use them
- Learning to use the `stdarg.h` library
- Understanding `va_list`, `va_start`, `va_arg`, and `va_end` macros
- Learning to handle variable numbers of parameters
- Understanding the `...` ellipsis notation in function prototypes

## Files

| File | Description |
|------|-------------|
| `variadic_functions.h` | Header file containing function prototypes |
| `0-sum_them_all.c` | Function that returns the sum of all its parameters |

## Key Concepts

### Variadic Functions
Variadic functions are functions that can accept a variable number of arguments. The number and types of arguments can vary from call to call.

### Essential Components
```c
#include <stdarg.h>

// Function prototype with ellipsis (...)
int sum_them_all(const unsigned int n, ...);

// Inside the function:
va_list args;           // Declare a va_list variable
va_start(args, n);      // Initialize the va_list
va_arg(args, type);     // Get the next argument of specified type
va_end(args);           // Clean up the va_list
```

### Syntax
```c
return_type function_name(fixed_params, ...)
{
    va_list args;
    va_start(args, last_fixed_param);
    
    // Process variable arguments
    while (condition) {
        type value = va_arg(args, type);
        // Use value
    }
    
    va_end(args);
    return result;
}
```

## Function Descriptions

### 0-sum_them_all.c
```c
int sum_them_all(const unsigned int n, ...);
```
- Takes an unsigned integer `n` indicating the number of parameters to follow
- Accepts a variable number of integer arguments
- Returns the sum of all variable arguments
- Returns 0 if `n == 0`
- Demonstrates basic variadic function usage with `stdarg.h`

## Usage Examples

### Basic Usage
```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int result;
    
    // Sum 2 numbers: 98 + 1024 = 1122
    result = sum_them_all(2, 98, 1024);
    printf("Sum: %d\n", result);  // Output: 1122
    
    // Sum 4 numbers: 98 + 1024 + 402 + (-1024) = 500
    result = sum_them_all(4, 98, 1024, 402, -1024);
    printf("Sum: %d\n", result);  // Output: 500
    
    // Edge case: no arguments to sum
    result = sum_them_all(0);
    printf("Sum: %d\n", result);  // Output: 0
    
    return (0);
}
```

### Advanced Example
```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    // Sum a single number
    printf("Sum of 1 number: %d\n", sum_them_all(1, 42));
    
    // Sum multiple positive numbers
    printf("Sum of positives: %d\n", sum_them_all(3, 10, 20, 30));
    
    // Sum with negative numbers
    printf("Sum with negatives: %d\n", sum_them_all(5, 100, -50, 25, -10, 5));
    
    // Large number of arguments
    printf("Sum of many: %d\n", sum_them_all(6, 1, 2, 3, 4, 5, 6));
    
    return (0);
}
```

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [main_file] 0-sum_them_all.c -o [output_name]
```

## Key Points

### Memory Management
- `va_start` must be called before accessing arguments
- `va_end` must be called after processing all arguments
- Each `va_start` must have a corresponding `va_end`

### Type Safety
- You must know the types of arguments being passed
- `va_arg` requires explicit type specification
- Passing wrong types can lead to undefined behavior

### Parameter Count
- The first parameter typically indicates the number of variable arguments
- This allows the function to know how many arguments to process
- Without this, you need another way to determine when to stop (like a sentinel value)

## Common Patterns

### Counting Parameters
```c
// Using a count parameter (like sum_them_all)
int func(int count, ...);

// Using a sentinel value
char *concat_strings(char *first, ...);  // NULL-terminated

// Using format strings (like printf)
int printf(const char *format, ...);
```

### Error Handling
```c
int safe_variadic_func(int count, ...)
{
    if (count <= 0)
        return (error_value);
    
    va_list args;
    va_start(args, count);
    
    // Process arguments...
    
    va_end(args);
    return (result);
}
```

## Real-world Applications

Variadic functions are used in:
- **Standard library functions**: `printf`, `scanf`, `sprintf`
- **Mathematical functions**: Sum, average, min, max of multiple values
- **String manipulation**: Concatenating multiple strings
- **Logging systems**: Flexible logging with various parameters
- **API functions**: Functions that accept optional parameters

## Author

Student at Holberton School