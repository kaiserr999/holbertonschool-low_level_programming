# malloc_free

This directory contains C functions that work with dynamic memory allocation (`malloc`, `free`).

## Files

- `0-create_array.c` - creates an array and initializes it with a specific character.
- `0-malloc_checked.c` - allocates memory and exits with status `98` if allocation fails.
- `1-strdup.c` - duplicates a string (custom implementation of `strdup`).
- `2-str_concat.c` - concatenates two strings.
- `3-alloc_grid.c` - creates a 2D array of integers.
- `4-free_grid.c` - frees a 2D array created by `alloc_grid`.

## Compilation

Compile and run tests with:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
./output
```

## Notes

- All functions must follow the Holberton School C coding style.
- `malloc_checked` must exit with status `98` when `malloc` fails.
