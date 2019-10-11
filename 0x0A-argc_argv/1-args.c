#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point. Prints the amount of arguments passed
 * @argc: Amount of arguments passed
 * @argv: String array filled with the arguments passed
 * Return: 0 if successful, anything else if error
 */

int main(int argc, char *argv[])
{
	argv[2] = "hello";
	printf("%d\n", argc);
	return (0);
}
