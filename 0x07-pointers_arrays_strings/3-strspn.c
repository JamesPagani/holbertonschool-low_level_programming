#include "holberton.h"

/**
 * _strspn - Calculates the length of the first segment of characters that
 * consists only of a specific set of characters
 * @s: Input string
 * @accept: Set of characters
 *
 * Return: Length of substring only containing the chars in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int span;
	int cond;

	i = 0;
	span = 0;
	cond = 0;

	while (s[i] != '\0' && !cond)
	{
		for (j = 0; accept[j] != '\0' && !cond; j++)
		{
			if (s[i] == accept[j])
			{
				cond++;
				span++;
			}
		}
		i++;
	}

	while (s[i] != '\0' && cond)
	{
		for (j = 0; accept[j] != '\0' && cond; j++)
		{
			if (s[i] == accept[j])
			{
				span++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				cond--;
			}
		}
		i++;
	}

	return (span);
}
