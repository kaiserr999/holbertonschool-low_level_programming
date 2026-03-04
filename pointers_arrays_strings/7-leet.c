#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to s
 *
 * Restrictions: only one if, two loops, no switch/ternary
 */
char *leet(char *s)
{
	int i, j;
	char *from = "aAeEoOtTlL";
	char *to   = "4433077100"; /* NOTE: length matches, see positions below */

	/* loop through characters */
	i = 0;
	while (s[i] != '\0')
	{
		/* inner loop checks mapping */
		j = 0;
		while (from[j] != '\0')
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
