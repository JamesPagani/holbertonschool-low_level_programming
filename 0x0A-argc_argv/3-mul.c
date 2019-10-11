#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point. Multiplies two numbers given as arguments
 * @argc: Amount of arguments passed
 * @argv: String array of all arguments passed
 * Return: 0 if succesfull
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
