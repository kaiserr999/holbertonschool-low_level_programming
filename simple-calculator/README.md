# C - Simple Calculator

This project implements a simple calculator program with basic arithmetic operations and menu-driven interface.

## Learning Objectives

- Understanding menu-driven program design
- Learning to handle user input and validation
- Working with different data types (integers and floats)
- Understanding control flow with switch statements
- Learning error handling for edge cases

## Features

- Interactive menu system
- Basic arithmetic operations (addition, subtraction, multiplication, division)
- Integer arithmetic for most operations
- Floating-point division with proper formatting
- Division by zero error handling
- Clean exit option

## Files

| File | Description |
|------|-------------|
| `calculator.c` | Main calculator program implementation |
| `calculator` | Compiled executable (after build) |

## Program Behavior

### Menu Options
1. **Addition** - Adds two integers using integer arithmetic
2. **Subtraction** - Subtracts two integers using integer arithmetic  
3. **Multiplication** - Multiplies two integers using integer arithmetic
4. **Division** - Divides two numbers with decimal result
5. **Exit** - Quit the program (option 0)

### Numeric Behavior
- Inputs `A` and `B` are integers
- Addition, subtraction, and multiplication use integer arithmetic
- Division uses decimal arithmetic and prints a floating-point result (e.g., `2.5`)
- If `B` is `0` on division, the program prints exactly: `Error: division by zero`

### User Interface
```
Simple Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
0. Quit

Enter your choice: [user input]
Enter first number: [user input]
Enter second number: [user input]
Result: [calculated result]
```

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 calculator.c -o calculator
```

## Usage

```bash
./calculator
```

### Example Session
```
Simple Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
0. Quit

Enter your choice: 1
Enter first number: 10
Enter second number: 5
Result: 15

Enter your choice: 4
Enter first number: 7
Enter second number: 2
Result: 3.5

Enter your choice: 4
Enter first number: 10
Enter second number: 0
Error: division by zero

Enter your choice: 0
Goodbye!
```

## Implementation Notes

### Switch Statement Structure
```c
switch (choice) {
    case 1:
        // Addition
        break;
    case 2:
        // Subtraction
        break;
    case 3:
        // Multiplication
        break;
    case 4:
        // Division with zero check
        break;
    case 0:
        // Exit
        break;
    default:
        // Invalid option
        break;
}
```

### Division Error Handling
```c
if (b == 0) {
    printf("Error: division by zero\n");
} else {
    printf("Result: %.1f\n", (float)a / b);
}
```

## Error Handling

- **Division by zero**: Displays error message instead of crashing
- **Invalid menu choice**: Prompts for valid option
- **Input validation**: Handles non-numeric input gracefully

## Author

Student at Holberton School