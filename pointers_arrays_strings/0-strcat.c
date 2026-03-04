#include "main.h"

/**
 * _strcat - concatenates the string pointed to by src to the end of dest
 * @dest: destination buffer (must have enough space)
 * @src: source string to append
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	/* move d to the end of dest string */
	while (*d != '\0')
		d++;

	/* copy src including null terminator */
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';

	return (dest);
}
