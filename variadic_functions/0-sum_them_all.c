#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * 
 * Return: sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (sum);
}