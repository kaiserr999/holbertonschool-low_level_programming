#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9,
 * followed by a new line. Do not print 2 and 4.
 */
void print_most_numbers(void)
{
	char c;

	/* Première utilisation de _putchar : dans la boucle pour les chiffres */
	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}

	/* Deuxième utilisation de _putchar : pour le retour à la ligne */
	_putchar('\n');
}
