# Singly Linked Lists

## Task 0: Print list
Write a function that prints all the elements of a list_t list.

### Prototype
```c
size_t print_list(const list_t *h);
```

### Requirements
- Return: the number of nodes
- Print format: `[len] str` for each node
- If str is NULL, print `[0] (nil)`
- Function uses printf

### Files
- `lists.h` - Header file with list_t structure definition
- `0-print_list.c` - Implementation of print_list function
