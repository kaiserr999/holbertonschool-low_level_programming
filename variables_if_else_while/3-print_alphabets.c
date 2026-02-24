#include <stdio.h>

/**
 * main - Point d'entrée
 * Description: Affiche l'alphabet en minuscules, puis en majuscules
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char lettre;

	/* 1. Boucle pour les minuscules */
	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre); /* Premier putchar utilisé */
	}

	/* 2. Boucle pour les majuscules */
	for (lettre = 'A'; lettre <= 'Z'; lettre++)
	{
		putchar(lettre); /* Deuxième putchar utilisé */
	}

	/* 3. Saut de ligne final */
	putchar('\n'); /* Troisième putchar utilisé */

	return (0);
}
