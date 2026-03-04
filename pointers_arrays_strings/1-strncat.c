#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: destination buffer (must have enough space)
 * @src: source string to append
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i = 0;

	/* move d to end of dest */
	while (*d != '\0')
		d++;

	/* append up to n characters of src */
	while (i < n && src[i] != '\0')
	{
		*d = src[i];
		d++;
		i++;
	}
	*d = '\0';

	return (dest);
}
