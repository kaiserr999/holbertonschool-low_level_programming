# C - Function pointers

This project introduces function pointers in C programming, demonstrating how to use functions as parameters and create flexible, reusable code.

## Learning Objectives

- Understanding what function pointers are and how to use them
- Learning how to pass functions as parameters to other functions
- Understanding the syntax for declaring and using function pointers
- Learning to create callback functions
- Understanding the power of function pointers for creating flexible code

## Files

| File | Description |
|------|-------------|
| `function_pointers.h` | Header file containing function prototypes |
| `0-print_name.c` | Function that prints a name using a function pointer |
| `1-array_iterator.c` | Function that executes a function on each element of an array |
| `2-int_index.c` | Function that searches for an integer using a comparison function |

## Key Concepts

### Function Pointers
Function pointers are variables that store the address of functions. They allow you to:
- Pass functions as arguments to other functions
- Create arrays of functions
- Implement callback mechanisms
- Create more flexible and modular code

### Syntax
```c
// Declare a function pointer
return_type (*pointer_name)(parameter_types);

// Example: pointer to function that takes char* and returns void
void (*func_ptr)(char *);

// Assign function address to pointer
func_ptr = function_name;

// Call function through pointer
func_ptr(argument);
```

## Function Descriptions

### 0-print_name.c
```c
void print_name(char *name, void (*f)(char *));
```
- Takes a name string and a function pointer as parameters
- Calls the provided function with the name as argument
- Includes safety checks for NULL pointers
- Demonstrates basic function pointer usage

### 1-array_iterator.c
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```
- Takes an array of integers, its size, and a function pointer
- Executes the provided function on each element of the array
- Includes safety checks for NULL array and function pointers
- Demonstrates function pointers with arrays and iteration

### 2-int_index.c
```c
int int_index(int *array, int size, int (*cmp)(int));
```
- Searches for an integer in an array using a comparison function
- Returns the index of the first element for which cmp function does not return 0
- Returns -1 if no element matches or if size <= 0
- Includes safety checks for NULL array and function pointers
- Demonstrates search algorithms with function pointers

## Usage Example

```c
#include <stdio.h>
#include "function_pointers.h"

void print_normal(char *name)
{
    printf("Hello, %s\n", name);
}

void print_upper(char *name)
{
    printf("HELLO, ");
    // Print name in uppercase
    int i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            putchar(name[i] - 32);
        else
            putchar(name[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    print_name("Alice", print_normal);     // Output: Hello, Alice
    print_name("Bob", print_upper);        // Output: HELLO, BOB
    return (0);
}
```

### Array Iterator Example

```c
#include <stdio.h>
#include "function_pointers.h"

void print_decimal(int elem)
{
    printf("%d ", elem);
}

void print_hex(int elem)
{
    printf("0x%x ", elem);
}

void multiply_by_two(int elem)
{
    printf("%d ", elem * 2);
}

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Decimal: ");
    array_iterator(numbers, size, print_decimal);
    printf("\n");
    
    printf("Hexadecimal: ");
    array_iterator(numbers, size, print_hex);
    printf("\n");
    
    printf("Doubled: ");
    array_iterator(numbers, size, multiply_by_two);
    printf("\n");
    
    return (0);
}
```

### Search Function Example

```c
#include <stdio.h>
#include "function_pointers.h"

int is_even(int n)
{
    return (n % 2 == 0);
}

int is_negative(int n)
{
    return (n < 0);
}

int is_greater_than_10(int n)
{
    return (n > 10);
}

int main(void)
{
    int numbers[] = {1, 3, -5, 8, 12, -2, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    
    index = int_index(numbers, size, is_even);
    printf("First even number at index: %d\n", index);    // Output: 3 (value 8)
    
    index = int_index(numbers, size, is_negative);
    printf("First negative number at index: %d\n", index); // Output: 2 (value -5)
    
    index = int_index(numbers, size, is_greater_than_10);
    printf("First number > 10 at index: %d\n", index);    // Output: 4 (value 12)
    
    return (0);
}
```

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [main_file] 0-print_name.c -o [output_name]
```

## Safety Considerations

The implementation includes safety checks:
- Verifies that the name pointer is not NULL
- Verifies that the function pointer is not NULL
- Only calls the function if both parameters are valid

```c
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
```

## Benefits of Function Pointers

1. **Flexibility**: Same function can work with different behaviors
2. **Modularity**: Separate algorithm from implementation details
3. **Callbacks**: Enable event-driven programming patterns
4. **Code Reuse**: Generic functions that work with multiple implementations
5. **Plugin Architecture**: Dynamic behavior selection at runtime

## Advanced Applications

Function pointers are used in:
- **Callback functions**: Event handling, signal processing
- **State machines**: Behavior based on current state
- **Strategy pattern**: Different algorithms for same problem
- **Function tables**: Jump tables for efficient dispatch
- **Plugin systems**: Dynamic loading of functionality

## Author

Student at Holberton School