#include "holberton.h"
/**
 * _strpbrk - Search a string for any of a set of bytes (homebrew version)
 * @s: Input string
 * @accept: Set of bytes for reference
 * Return: Pointer to the first occurence of a byte in accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, cond;

	cond = 1;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				cond--;
				break;
			}
		}
		if (!cond)
			break;
		s++;
	}

	if (*s == '\0')
		return ('\0');

	return (s);
}
