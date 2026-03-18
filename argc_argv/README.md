# C - argc, argv

This project explores command line arguments in C programming using argc and argv.

## Learning Objectives

- Understanding how to use arguments passed to main function
- Learning what argc and argv are and how to use them
- Understanding how to access command line arguments
- Learning to compile programs that use command line arguments
- Understanding how the main function receives parameters

## Files

| File | Description |
|------|-------------|
| `0-whatsmyname.c` | Program that prints its own name |
| `1-args.c` | Program that prints the number of arguments passed to it |
| `2-args.c` | Program that prints all arguments it receives |
| `3-mul.c` | Program that multiplies two numbers |
| `4-add.c` | Program that adds positive numbers |

## Key Concepts

### argc and argv
```c
int main(int argc, char *argv[])
{
    // argc: argument count (number of arguments)
    // argv: argument vector (array of string arguments)
    // argv[0] is always the program name
    // argv[1] to argv[argc-1] are the command line arguments
}
```

### Command Line Usage
```bash
./program arg1 arg2 arg3
# argc = 4 (program name + 3 arguments)
# argv[0] = "./program"
# argv[1] = "arg1"
# argv[2] = "arg2" 
# argv[3] = "arg3"
```

## Program Descriptions

### 0-whatsmyname.c
Prints the name of the program, followed by a new line.

### 1-args.c
Prints the number of arguments passed to the program.

### 2-args.c
Prints all arguments received, one per line.

### 3-mul.c
Multiplies two numbers passed as arguments.
- Usage: `./mul num1 num2`
- Prints "Error" if not exactly 2 arguments

### 4-add.c
Adds positive numbers passed as arguments.
- Usage: `./add num1 num2 num3 ...`
- Prints "Error" if any argument is not a positive number
- Prints 0 if no arguments

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [filename].c -o [output_name]
```

## Usage Examples

```bash
# Compile whatsmyname program
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis
# Output: ./mynameis

# Compile and test args counter
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-args.c -o nargs
./nargs hello world
# Output: 2

# Compile and test multiplication
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul
./mul 5 3
# Output: 15

# Compile and test addition
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-add.c -o add
./add 1 2 3 4
# Output: 10
```

## Author

Student at Holberton School
