#include "holberton.h"

/**
 * cap_string - Capitalizes EVERY single word on the string
 * @s: String to capitalize
 *
 * Return: Captialized string (s)
 */

char *cap_string(char *s)
{
	char sepa_ls[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int count;
	int l;

	count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			for (l = 0; l < 13; l++)
			{
				if (*(s + (count - 1)) == sepa_ls[l])
				{
					*(s + count) -= 32;
				}
			}
		}
		count++;
	}
	return (s);
}
