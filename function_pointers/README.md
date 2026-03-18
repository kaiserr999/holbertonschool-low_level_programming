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