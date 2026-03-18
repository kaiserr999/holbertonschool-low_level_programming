# Holberton School - Low Level Programming

This repository contains projects and exercises for the Low Level Programming curriculum at Holberton School, focusing on C programming language fundamentals and system programming concepts.

## Repository Structure

| Directory | Description |
|-----------|-------------|
| [`hello_world`](./hello_world) | Introduction to C programming - compilation process, basic syntax |
| [`variables_if_else_while`](./variables_if_else_while) | Variables, conditional statements, and loops |
| [`functions_nested_loops`](./functions_nested_loops) | Function creation, prototypes, and nested loops |
| [`more_functions_nested_loops`](./more_functions_nested_loops) | Advanced functions and complex loop patterns |
| [`pointers_arrays_strings`](./pointers_arrays_strings) | Pointers, arrays, and string manipulation |
| [`malloc_free`](./malloc_free) | Dynamic memory allocation with malloc and free |
| [`more_malloc_free`](./more_malloc_free) | Advanced dynamic memory management |
| [`argc_argv`](./argc_argv) | Command line arguments handling |
| [`structures_typedef`](./structures_typedef) | Structures and typedef in C |
| [`intro_debugging`](./intro_debugging) | Debugging techniques and common error patterns |
| [`simple-calculator`](./simple-calculator) | Menu-driven calculator program |
| [`benchmarking`](./benchmarking) | Performance analysis and algorithm comparison |

## Learning Progression

### 1. Foundations (Hello World → Variables)
- **C compilation process**: preprocessing, compilation, assembly, linking
- **Basic syntax**: variables, data types, operators
- **Control flow**: if/else statements, while loops
- **Input/Output**: printf, puts, basic I/O operations

### 2. Functions and Modularity
- **Function creation**: prototypes, definitions, parameters
- **Code organization**: header files, separate compilation
- **Nested loops**: complex iteration patterns
- **Mathematical operations**: arithmetic, pattern printing

### 3. Memory and Data Structures
- **Pointers**: memory addresses, pointer arithmetic
- **Arrays**: one-dimensional and multi-dimensional arrays  
- **Strings**: C-style string manipulation
- **Memory management**: malloc, free, memory leaks

### 4. Advanced Concepts
- **Command line**: argc/argv argument processing
- **Data structures**: structures, typedef, custom types
- **Debugging**: systematic debugging approaches
- **Performance**: benchmarking and optimization

## Compilation Standards

All projects follow strict compilation standards:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [files] -o [output]
```

### Compiler Flags Explained
- `-Wall`: Enable all common warning messages
- `-Werror`: Treat warnings as errors
- `-Wextra`: Enable extra warning messages
- `-pedantic`: Enforce strict ISO C compliance
- `-std=gnu89`: Use GNU C89 standard

## Code Style

All code follows the **Betty** coding style:
- Proper indentation (8-space tabs)
- Function and variable naming conventions
- Maximum line length of 80 characters
- Comprehensive documentation
- No trailing whitespace

## Project Structure

Each project directory typically contains:
```
project_name/
├── README.md          # Project description and instructions
├── main.h            # Header file with prototypes (if applicable)
├── [0-9]-*.c         # Numbered task files
├── *-main.c          # Test files (usually provided)
└── _putchar.c        # Custom putchar implementation (if needed)
```

## Getting Started

### Clone the Repository
```bash
git clone https://github.com/[username]/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming
```

### Navigate to a Project
```bash
cd hello_world
ls -la
cat README.md
```

### Compile and Test
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
./puts
```

## Key Learning Outcomes

By completing these projects, students will master:

### Technical Skills
- **C Programming**: Syntax, semantics, and best practices
- **Memory Management**: Stack vs heap, dynamic allocation
- **System Programming**: Low-level operations and system calls
- **Debugging**: Systematic problem-solving approaches
- **Performance**: Optimization and benchmarking techniques

### Development Practices
- **Version Control**: Git workflow and collaboration
- **Code Quality**: Writing clean, maintainable code
- **Testing**: Systematic testing and validation
- **Documentation**: Clear and comprehensive documentation

### Problem-Solving
- **Algorithm Design**: Efficient algorithm implementation
- **Data Structures**: Appropriate data structure selection
- **Optimization**: Performance analysis and improvement
- **Debugging**: Systematic bug identification and resolution

## Resources

### Recommended Reading
- "The C Programming Language" by Kernighan & Ritchie
- "C: The Complete Reference" by Herbert Schildt
- "Expert C Programming" by Peter van der Linden

### Online Resources
- [C Reference Documentation](https://en.cppreference.com/w/c)
- [GNU GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Valgrind Memory Debugger](https://valgrind.org/)

### Development Tools
- **Compiler**: GCC (GNU Compiler Collection)
- **Debugger**: GDB (GNU Debugger)
- **Memory Analysis**: Valgrind
- **Static Analysis**: Cppcheck, Clang Static Analyzer

## Contributing

When contributing to this repository:

1. **Follow Betty Style**: Ensure code meets style requirements
2. **Test Thoroughly**: Verify all functionality works correctly
3. **Document Changes**: Update README files as needed
4. **Commit Messages**: Use clear, descriptive commit messages

## Author

Student at Holberton School

## License

This project is part of the Holberton School curriculum. Please respect academic integrity policies when using this code.
