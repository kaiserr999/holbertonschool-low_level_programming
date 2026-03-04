#include "main.h"

/**
 * _strncpy - copies a string, padding with '\0' if less than n characters
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	/* copy up to n characters or until src ends */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* pad with null if i < n */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
