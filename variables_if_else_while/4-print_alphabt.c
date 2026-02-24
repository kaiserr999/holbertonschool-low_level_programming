#include <stdio.h>

/**
 * main - Point d'entrée
 * Description: Imprime l'alphabet sans 'e' et 'q'
 * Return: Toujours 0
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		/* SI la lettre n'est pas 'e' ET n'est pas 'q' */
		if (lettre != 'e' && lettre != 'q')
		{
			putchar(lettre); /* Utilisation 1 */
		}
	}
	putchar('\n'); /* Utilisation 2 */

	return (0);
}
