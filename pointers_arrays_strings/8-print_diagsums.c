#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: dimension of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main;
	int sum_secondary;

	sum_main = 0;
	sum_secondary = 0;
	i = 0;
	while (i < size)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", sum_main, sum_secondary);
}
