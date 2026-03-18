# C - Structures, typedef

This project introduces structures and typedef in C programming, demonstrating how to create custom data types and work with them.

## Learning Objectives

- Understanding what structures are and when to use them
- Learning how to use typedef to create type aliases
- Understanding how to access structure members
- Learning to work with pointers to structures
- Understanding dynamic memory allocation for structures

## Files

| File | Description |
|------|-------------|
| `dog.h` | Header file defining the dog structure and function prototypes |
| `1-init_dog.c` | Function that initializes a variable of type struct dog |
| `2-print_dog.c` | Function that prints a struct dog |
| `4-new_dog.c` | Function that creates a new dog with dynamic memory allocation |
| `5-free_dog.c` | Function that frees memory allocated for a dog structure |

## Structure Definition

```c
/**
 * struct dog - information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;
```

## Function Prototypes

```c
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
```

## Key Concepts

### Structure Initialization
```c
struct dog my_dog;
my_dog.name = "Buddy";
my_dog.age = 2.5;
my_dog.owner = "John";
```

### Using typedef
```c
dog_t my_dog;  // Same as: struct dog my_dog;
```

### Dynamic Memory Allocation
```c
dog_t *dog_ptr = new_dog("Max", 3.0, "Alice");
// Remember to free the memory
free_dog(dog_ptr);
```

## Program Descriptions

### 1-init_dog.c
Initializes a dog structure with provided values.
- Handles NULL pointer checks
- Sets name, age, and owner fields

### 2-print_dog.c
Prints information about a dog.
- Handles NULL struct pointers
- Prints "(nil)" for NULL string fields
- Format: Name, Age, Owner

### 4-new_dog.c
Creates a new dog with dynamically allocated memory.
- Allocates memory for the structure
- Creates copies of name and owner strings
- Returns NULL on allocation failure
- Handles memory cleanup on partial failure

### 5-free_dog.c
Frees memory allocated by new_dog.
- Safely frees name and owner strings
- Frees the structure itself
- Handles NULL pointers gracefully

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [files] -o [output_name]
```

## Usage Examples

```bash
# Test structure initialization
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-init_dog.c -o init_dog
./init_dog

# Test structure printing
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-print_dog.c -o print_dog
./print_dog

# Test dynamic allocation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-main.c 4-new_dog.c -o new_dog
./new_dog

# Test memory management
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o free_dog
valgrind ./free_dog  # Check for memory leaks
```

## Memory Management

When using `new_dog()`, always pair it with `free_dog()` to prevent memory leaks:

```c
dog_t *my_dog = new_dog("Buddy", 3.5, "John");
if (my_dog != NULL)
{
    // Use the dog structure
    print_dog(my_dog);
    
    // Free the memory
    free_dog(my_dog);
}
```

## Author

Student at Holberton School
