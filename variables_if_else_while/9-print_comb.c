#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48); /* Affiche le chiffre */

		if (n != 9) /* Si ce n'est pas le dernier chiffre */
		{
			putchar(','); /* Affiche la virgule */
			putchar(' '); /* Affiche l'espace */
		}
	}

	putchar('\n'); /* Saut de ligne final */

	return (0);
}
