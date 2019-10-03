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

	if (*(s + 0) >= 'a' && *(s + 0) <= 'z')
	{
		*(s + 0) -= 32;
	}

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			l = 0;
			while (l < 13)
			{
				if (*(s + (count - 1)) == sepa_ls[l])
				{
					*(s + count) -= 32;
				}
				l++;
			}
		}
		count++;
	}
	return (s);
}
