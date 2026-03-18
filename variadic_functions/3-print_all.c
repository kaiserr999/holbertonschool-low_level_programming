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
	int i, j, found;

	va_start(args, format);
	sep = "";
	i = 0;
	while (format && format[i])
	{
		j = 0;
		found = 0;
		while (j < 4)
		{
			found = (format[i] == "cifs"[j]);
			if (found)
			{
				printf("%s", sep);
				sep = ", ";
				j += (j == 0) * (printf("%c", va_arg(args, int)), 4);
				j += (j == 1) * (printf("%d", va_arg(args, int)), 3);
				j += (j == 2) * (printf("%f", va_arg(args, double)), 2);
				if (j == 3)
				{
					str = va_arg(args, char *);
					printf("%s", str ? str : "(nil)");
					j = 4;
				}
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}