#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point d'entrée
 * Description: Affiche si le nombre n est positif, nul ou négatif
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Ton code commence ici */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
