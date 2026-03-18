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
	int i, j;

	va_start(args, format);
	sep = "";
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while ("cifs"[j] && format[i] != "cifs"[j])
			j++;
		if ("cifs"[j])
		{
			printf("%s", sep);
			sep = ", ";
			if (j == 0)
				printf("%c", va_arg(args, int));
			if (j == 1)
				printf("%d", va_arg(args, int));
			if (j == 2)
				printf("%f", va_arg(args, double));
			if (j == 3)
			{
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}