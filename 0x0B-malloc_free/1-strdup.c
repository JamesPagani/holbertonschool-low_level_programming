#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Counts the lenght of the string
 * @s: String to analyze
 *
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}


/**
 * _strdup - Copies a string to a newly allocated memory space
 * @str: String to copy
 * Return: Pointer to the copy of str
 */

char *_strdup(char *str)
{
	char *nstr;
	int i, leng;

	leng = _strlen(str);
	if (str == NULL)
		return (NULL);
	nstr = (char *) malloc(sizeof(char) * leng);
	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < leng; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
