#include "holberton.h"

/**
 * times_table - Shows the times table from 0 to 9.
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int num1 = 0;
	int num2 = 0;
	int result;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			result = num1 * num2;

			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}

			if (num2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2++;
		}
		_putchar(10);
		num1++;
		num2 = 0;
	}
}
