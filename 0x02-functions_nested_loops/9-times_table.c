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

	while (num1 < 10)
	{
		while (num2 < 10)
		{
			if (num2 == 0)
			{
				_putchar(num1 * num2 + '0');
			}
			else if ((num1 * num2) < 10)
			{
				_putchar(' ');
				_putchar((num1 * num2) % 10 + '0');
			}
			else
			{
				_putchar((num1 * num2) / 10 + '0');
				_putchar((num1 * num2) % 10 + '0');
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
