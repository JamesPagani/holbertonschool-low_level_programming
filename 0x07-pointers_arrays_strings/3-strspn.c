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
	int i, j, span, cond;

	span = cond = 0;

	for (i = 0; s[i] != '\0' && cond != 2; i++)
	{
		for (j = 0; accept[j] != '\0' && !cond; j++)
		{
			if (s[i] == accept[j] && cond == 0)
			{
				cond++;
				span++;
				break;
			}
			else if (s[i] == accept[j] && cond == 1)
			{
				span++;
				break;
			}
			else if (s[i] != accept[j] && accpet[j + 1] == '\0')
			{
				cond++;
				break;
			}
		}
	}
	return (span);
}
