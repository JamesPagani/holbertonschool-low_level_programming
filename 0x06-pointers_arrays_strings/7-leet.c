#include "holberton.h"

/**
 * leet - Turns your text into 1337 73x7. N01c3
 * @s: String to 13371fy
 *
 * Return: 1337 73x7, ub3rh4x0r
 */

char *leet(char *s)
{
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char haxor[] = {'4', '3', '0', '7', '1'};
	int i;
	int j;

	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == upper[j] || *(s + i) == lower[j])
			{
				*(s + i) = haxor[j];
			}
		}
		i++;
	}
	return (s);
}
