# more_malloc_free

This directory contains the `malloc_checked` function for the Holberton School project "More malloc, free".

## Files

- `0-malloc_checked.c` - allocates memory using `malloc` and exits with status `98` when allocation fails.
- `0-main.c` - test driver that exercises `malloc_checked`.
- `1-string_nconcat.c` - concatenates two strings using a newly allocated buffer.
- `1-main.c` - test driver that exercises `string_nconcat`.
- `2-calloc.c` - allocates zero-initialized memory for an array (like `calloc`).
- `2-main.c` - test driver that exercises `_calloc`.
- `main.h` - header declaring `malloc_checked`, `string_nconcat`, and `_calloc`.

## Compilation

Compile and run the test program with:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
```

## Behavior

- `malloc_checked` returns the pointer returned by `malloc`.
- If `malloc` returns `NULL`, `malloc_checked` terminates the program with exit status `98`.
