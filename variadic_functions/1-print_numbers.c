#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}