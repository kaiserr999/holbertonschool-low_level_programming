#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char *from = "aAeEoOtTlL";
	char *to   = "4433007711"; /* a/A=4, e/E=3, o/O=0, t/T=7, l/L=1 */

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
