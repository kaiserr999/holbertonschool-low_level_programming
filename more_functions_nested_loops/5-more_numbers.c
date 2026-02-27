#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	/* Boucle externe : 10 fois */
	for (i = 0; i < 10; i++)
	{
		/* Boucle interne : de 0 à 14 */
		for (j = 0; j <= 14; j++)
		{
			/* Si le nombre est supérieur à 9, on affiche les dizaines */
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			/* On affiche les unités */
			_putchar((j % 10) + '0');
		}
		/* Saut de ligne */
		_putchar('\n');
	}
}
