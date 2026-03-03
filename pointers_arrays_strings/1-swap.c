#include "main.h"
/**
 * swap_int - prend deux pointeurs vers des int et échange les valeurs
 * vers lesquelles ils pointent.
 * @a: le pointeur vers le premier entier
 * @b: le pointeur vers le deuxième entier
 *
 * Return: void (rien)
 */
void swap_int(int *a, int *b)
{    int temp;

    temp = *a; /* Stocke la valeur pointée par a dans temp */
    *a = *b;   /* Met la valeur pointée par b dans a */
    *b = temp; /* Met la valeur stockée dans temp (ancienne valeur de a) dans b */
}
