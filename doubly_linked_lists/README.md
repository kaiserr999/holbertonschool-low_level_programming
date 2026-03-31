# Doubly Linked Lists

## 0. Print list

Write a function that prints all the elements of a `dlistint_t` list.

### Prototype

```c
size_t print_dlistint(const dlistint_t *h);
```

### Return

- The number of nodes in the list.

### File

- `0-print_dlistint.c`

### Example

```c
n = print_dlistint(head);
printf("-> %lu elements\n", n);
```

Expected output format:

```text
9
8
-> 2 elements
```

### Compile

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
./a
```
