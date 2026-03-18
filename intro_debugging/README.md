# C - Intro to Debugging

This project introduces debugging techniques and common debugging scenarios in C programming.

## Learning Objectives

- Understanding common debugging techniques
- Learning to identify and fix logical errors
- Understanding how to trace program execution
- Learning to use debugging tools and techniques
- Understanding common programming mistakes and how to avoid them

## Files

| File | Description |
|------|-------------|
| `multiplication_table.c` | Program demonstrating debugging a multiplication table |
| `row_sums.c` | Program for calculating and debugging row sums |
| `sum_to_n.c` | Program for calculating sum from 1 to n with debugging |

## Common Debugging Techniques

### 1. Print Debugging
```c
printf("Debug: variable x = %d\n", x);
printf("Debug: entering function_name\n");
printf("Debug: loop iteration %d\n", i);
```

### 2. Step-by-step Analysis
- Trace through code line by line
- Check variable values at each step
- Verify loop conditions and iterations

### 3. Boundary Testing
- Test with edge cases (0, 1, maximum values)
- Test with invalid inputs
- Test with empty inputs

## Debugging Process

1. **Identify the Problem**
   - What is the expected output?
   - What is the actual output?
   - Where does the discrepancy occur?

2. **Isolate the Issue**
   - Add print statements
   - Test smaller parts of the code
   - Use simple test cases

3. **Fix and Verify**
   - Make minimal changes
   - Test the fix thoroughly
   - Ensure no new bugs are introduced

## Common C Programming Errors

### Off-by-one Errors
```c
// Wrong: should be i < n, not i <= n
for (int i = 0; i <= n; i++)
    array[i] = i;
```

### Uninitialized Variables
```c
int sum;  // Wrong: should initialize to 0
sum += value;
```

### Array Bounds
```c
int arr[10];
arr[10] = 5;  // Wrong: valid indices are 0-9
```

## Compilation and Testing

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [filename].c -o [output_name]
./[output_name]
```

## Debug Compilation
```bash
# Compile with debug information
gcc -g -Wall -Werror -Wextra -pedantic -std=gnu89 [filename].c -o [output_name]

# Use with debugger (if available)
gdb ./[output_name]
```

## Author

Student at Holberton School