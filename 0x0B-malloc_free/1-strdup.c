#include "holberton.h"
#include <stdlib.h>
/**
 * _strcpy - Copies the string from a source to a destination
 * @dest: Where to copy the string
 * @src: String to copy
 *
 * Return: dest's pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	

	return (dest);
}


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
	int leng;

	leng = _strlen(str) + 1;
	if (str == NULL)
		return (NULL);
	nstr = (char *) malloc(sizeof(char) * leng);
	if (nstr == NULL)
		return (NULL);

	_strcpy(nstr, str);
	return (nstr);
}
