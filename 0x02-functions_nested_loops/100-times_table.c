#include "holberton.h"
/**
 * print_one_digit - Prints a single digit number
 * @num: Number to print
 * Return: Nothing
 */

void print_one_digit(int num)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(num + 48);
}

/**
 * print_two_digits - Prints a two digit number
 * @num: Number to print
 * Return: Nothing
 */

void print_two_digits(int num)
{
	_putchar(' ');
	_putchar((num / 10) + 48);
	_putchar((num % 10) + 48);
}

/**
 * print_three_digits - Prints a three digit number
 * @num: Number to print
 * Return: Nothing
 */

void print_three_digits(int num)
{
	_putchar((num / 100) + 48);
	_putchar(((num / 10) % 10) + 48);
	_putchar((num % 10) + 48);
}

/**
 * print_times_table - Print the times table, from 0 to n with some exceptions
 * @n: Limit of the times table
 *
 * Return: Nothing.
 */

void print_times_table(int n)
{
	int num1 = 0;
	int num2 = 1;
	int result = 0;

	if (n <= 15 && n >= 0)
	{
		while (num1 <= n)
		{
			_putchar('0');
			while (num2 <= n)
			{
				_putchar(',');
				_putchar(' ');

				result = num1 * num2;
				if (result >= 100)
					print_three_digits(result);
				else if (result >= 10)
					print_two_digits(result);
				else
					print_one_digit(result);
				num2++;
			}
			_putchar('\n');
			num1++;
			num2 = 1;
		}
	}
}
