#include "holberton.h"
/**
 * _strstr - Finds a substring
 * @haystack: Input string
 * @needle: Substring to find in haystack
 * Return: Pointer to the beginning of the substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, cond;

	cond = 0;
	if (needle == "")
		return (haystack);

	while (*haystack != '\0' && cond != 2)
	{
		if (*haystack == needle[0])
		{
			cond = 1;
			for (i = 0; needle[i] != '\0' && cond == 1; i++)
			{
				if (haystack[i] != needle[i])
					cond = 0;
				else if (needle[i + 1] == '\0')
					cond = 2;
			}
		}
		if (cond == 2)
			break;
		haystack++;
	}
	if (cond != 2)
		return (0);
	return (haystack);
}
