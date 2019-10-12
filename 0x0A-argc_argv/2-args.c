#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point. prints all arguments passed
 * @argc: Amount of arguments passed
 * @argv: String array of arguments passed
 * Return: 0 if successful, anything else if error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
