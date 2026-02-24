#include <stdio.h>

/**
 * main : Entry point
 * description : ecrire tous les char en maj et min
 * return: Always 0 "success"
 */
 int main(void)
 {
	char lettre;
	
       	for (lettre = 'a'; lettre <= 'z'; lettre++)
         {
		putchar(lettre);
	 }
	 for (lettre = 'A'; lettre <= 'Z'; lettre++)
	 {
		 putchar(lettre);
	 }
	 
	 putchar('\n');

	 return (0);
 }
