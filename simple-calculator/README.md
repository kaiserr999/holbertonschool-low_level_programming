# Simple Calculator

This program prints a calculator menu and allows quitting with option `0`.

## Numeric behavior

- Inputs `A` and `B` are integers.
- Addition, subtraction, and multiplication use integer arithmetic.
- Division uses decimal arithmetic and prints a floating-point result (e.g. `2.5`).
- If `B` is `0` on division, the program prints exactly:
	`Error: division by zero`

## Build

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 calculator.c -o calculator
```

## Run

```sh
./calculator
```