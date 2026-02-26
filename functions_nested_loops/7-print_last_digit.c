#include "main.h"

/**
 * print_last_digit - imprime le dernier chiffre d'un nombre
 * @n: le nombre en question
 *
 * Return: la valeur du dernier chiffre
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	/* Si le chiffre est négatif, on le rend positif */
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	/* On affiche le chiffre (converti en caractère avec + '0') */
	_putchar(last_digit + '0');

	/* On renvoie la valeur entière */
	return (last_digit);
}
