# more_malloc_free

This directory contains the `malloc_checked` function for the Holberton School project "More malloc, free".

## Files

- `0-malloc_checked.c` - allocates memory using `malloc` and exits with status `98` when allocation fails.
- `0-main.c` - test driver that exercises `malloc_checked`.
- `1-string_nconcat.c` - concatenates two strings using a newly allocated buffer.
- `1-main.c` - test driver that exercises `string_nconcat`.
- `main.h` - header declaring `malloc_checked` and `string_nconcat`.

## Compilation

Compile and run the test program with:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
```

## Behavior

- `malloc_checked` returns the pointer returned by `malloc`.
- If `malloc` returns `NULL`, `malloc_checked` terminates the program with exit status `98`.
