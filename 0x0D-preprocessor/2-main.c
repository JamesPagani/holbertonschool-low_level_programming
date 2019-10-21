#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point. Prints the name of the source file used for compilation
 * Return: 0 if successful, anything else for error
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
