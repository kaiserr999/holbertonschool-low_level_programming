#include "main.h"

/**
 * main - Entry point
 * Description: Le progrmamme va afficher lalphabet 10 fois suivi d'un retour a la ligne
 * Return: always 0 (success)
 */

 int main(void)
 char c;
 int i;
    {
        for (c = 'a'; c <= 'z'; c++)
        printf("%c", c);
        for (i = 0; i < 10; i++)
        printf("%c", i);
        printf("\n");

        
        return (0);
    }


