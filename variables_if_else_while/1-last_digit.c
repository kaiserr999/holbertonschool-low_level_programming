#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point d'entrée
 * Description: Calcule et affiche le dernier chiffre de n
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* 1. On calcule le dernier chiffre */
	last = n % 10;

	/* 2. On commence l'affichage obligatoire pour tous les cas */
	printf("Last digit of %d is %d ", n, last);

	/* 3. On teste les conditions pour finir la phrase */
	if (last > 5)
	{
		printf ("and is greater than 5\n")
	}
        else if (last == 0)
	{
	        printf ("and is 0\n");
	}
        else
	{
	        printf ("and is less than 6 and not 0\n");
	}

        return (0);
}	
