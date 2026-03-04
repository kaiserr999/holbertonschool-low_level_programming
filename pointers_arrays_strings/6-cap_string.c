#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1; /* flag if next letter should be uppercase */

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && capitalize)
		{
			s[i] = s[i] - ('a' - 'A');
			capitalize = 0;
		}
		else if ((s[i] >= 'A' && s[i] <= 'Z') && !capitalize)
		{
			/* leave uppercase letter if not start of word */
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			 s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			 s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			 s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			 s[i] == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		i++;
	}
	return (s);
}
