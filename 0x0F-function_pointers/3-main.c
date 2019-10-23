#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point. Makes a simple math operation
 * @argc: Amount of arguments (only 4 arguments are accepted)
 * @argv: Arguments (name, num1, operand, num2)
 * Return: 0 if successful, 98 if there are less or more than 4 arguments
 * 99 if the given operand does not exist, 100 on a attempted division by 0.
 * Any other number for a undefined error
 */

int main(int argc, char *argv[])
{
	int (*oper)(int, int);
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (oper == op_div && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = oper(num1, num2);
	printf("%d\n", result);
	return (0);
}
