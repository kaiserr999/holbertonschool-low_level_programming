#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int sign;
	int num;
	int digit;

	sign = 1;
	num = 0;

	while (*s != '\0' && !(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		
		if (num < -214748364 || (num == -214748364 && digit > 8))
		{
			while (*s >= '0' && *s <= '9')
				s++;
			break;
		}
		
		num = num * 10 - digit;
		s++;
	}

	if (sign == 1)
		num = -num;

	return (num);
}

