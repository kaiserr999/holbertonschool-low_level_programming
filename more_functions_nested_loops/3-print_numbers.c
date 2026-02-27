#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9,
 * followed by a new line.
 */
void print_numbers(void)
{
	char c;

	/* Première utilisation de _putchar : dans la boucle pour les chiffres */
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	/* Deuxième utilisation de _putchar : pour le retour à la ligne */
	_putchar('\n');
}
