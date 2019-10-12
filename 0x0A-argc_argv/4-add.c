#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * num_check - Checks if a given string argument is a number
 * @s: String to check
 * Return: 1 if s is a number, 0 if it isnt
 */

int num_check(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if  (*(s + i) < 48 && *(s + i) > 57)
			return (0);
	}
	return (1);
}

/**
 * main - Entry point. Sums all the numbers given as arguments
 * @argc: Number of arguments passed
 * @argv: String array of all arguments passed
 * Return: 0 if successful, 1 if an argument was not a number, anything else
 * for any other error
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (num_check(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return(1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
