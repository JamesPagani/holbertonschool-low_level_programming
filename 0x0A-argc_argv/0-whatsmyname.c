#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point. Prints the name of the program (with path)
 * @argc: Number of arguments passed on the command line
 * @argv: Array of arguments passed on the command line of size "argc"
 * Return: 0 if successful, anything else if error
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
