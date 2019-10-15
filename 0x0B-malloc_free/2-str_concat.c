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
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcat - Concatenates two strings
 * @dest: String where to append
 * @src: String to append
 *
 * Return: Concatenaded string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}

/**
 * _strcpy - Copies the string from a source to a destination
 * @dest: Where to copy the string
 * @src: String to copy
 *
 * Return: dest's pointer
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (*src != '\0')
	{
		*(dest + count) = *src;
		src++;
		count++;
	}
	*(dest + count) = '\0';

	return (dest);
}

/**
 * str_concat - Concatenates two strings
 * @s1: String one
 * @s2: String two
 * Return: Pointer to a newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int leng1, leng2;

	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	s3 = (char *) malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (s3 == NULL)
		return (NULL);
	s3 = _strcpy(s3, s1);
	s3 = _strcat(s3, s2);
	return (s3);
}
