#include "holberton.h"

/**
 * print_times_table - Print the times table, from 0 to n with some exceptions
 * @n: Limit of the times table
 *
 * Return: Nothing.
 */

void print_times_table(int n)
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	if (n > 15 || n < 0)
	{
		_putchar(1);
	}
	else
	{
		while (num1 < n)
		{
			while (num2 < n)
			{
				result = num1 * num2;

				if (num2 == 0)
				{
					_putchar(result + '0');
				}
				else if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result % 10 + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(result / 100 + '0');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}

				if (num2 != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(10);
				}
				num2++;
			}
			num1++;
			num2 = 0;
		}
	}
}
