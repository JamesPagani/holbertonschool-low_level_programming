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

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
/**
 * _strcat - Concatenates two strings (Modified to add newlines)
 * @dest: String where to append
 * @src: String to append
 *
 * Return: Concatenaded string
 */

char *_strcat(char *dest, char *src)
{
	int count_dest;
	int count_src;

	count_dest = 0;
	count_src = 0;

	while (*(dest + count_dest) != '\0')
	{
		count_dest++;
	}

	while (*(src + count_src) != '\0')
	{
		*(dest + count_dest) = *(src + count_src);
		count_dest++;
		count_src++;
	}

	*(dest + count_dest) = '\n';

	return (dest);
}


/**
 * argstostr - Prints all the arguments passed by the command line
 * @ac: Amount of arguments passed
 * @av: Arguments
 * Return: Every argument passed, separated by newlines
 */

char *argstostr(int ac, char **av)
{
	char *out;
	int leng, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	leng = 1;
	for (i = 0; i < ac; i++)
	{
		leng = leng + _strlen(av[i]) + 1;
	}

	out = (char *) malloc(leng * sizeof(char));
	if (out == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		out = _strcat(out, av[i]);
	}
	out[leng - 1] = '\0';
	return (out);
}
