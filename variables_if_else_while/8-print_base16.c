#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char lettre;

	/* Boucle 1 : Affiche les chiffres de '0' à '9' */
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n); /* Utilisation 1 */
	}

	/* Boucle 2 : Affiche les lettres de 'a' à 'f' */
	for (lettre = 'a'; lettre <= 'f'; lettre++)
	{
		putchar(lettre); /* Utilisation 2 */
	}

	putchar('\n'); /* Utilisation 3 */

	return (0);
}
