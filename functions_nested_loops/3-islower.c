#include "main.h"

/**
 * main - Entry point
 * Description: le programme doit checker si le caractere est en minuscule ou pas
 *              suivi d'un retour a la ligne
 * Return: always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

