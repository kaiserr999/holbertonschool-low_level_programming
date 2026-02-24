#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		/* On ajoute 48 pour obtenir le code ASCII du chiffre */
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}
