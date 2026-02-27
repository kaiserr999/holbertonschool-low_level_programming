#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			/* Imprimer les espaces */
			for (j = 0; j < (size - i); j++)
			{
				_putchar(' ');
			}
			/* Imprimer les # */
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
