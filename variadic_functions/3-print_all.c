#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *sep;
	int i, match, printed;

	va_start(args, format);
	sep = "";
	i = 0;
	while (format && format[i])
	{
		match = (format[i] == 'c') + (format[i] == 'i') * 2 + 
				(format[i] == 'f') * 3 + (format[i] == 's') * 4;
		printed = 0;
		if (match)
			printf("%s", sep), sep = ", ", printed = 1;
		if (match == 1)
			printf("%c", va_arg(args, int));
		printed && match == 2 && (printf("%d", va_arg(args, int)), 0);
		printed && match == 3 && (printf("%f", va_arg(args, double)), 0);
		printed && match == 4 && (str = va_arg(args, char *), printf("%s", str ? str : "(nil)"), 0);
		i++;
	}
	va_end(args);
	printf("\n");
}