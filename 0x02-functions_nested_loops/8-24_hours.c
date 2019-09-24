#include "holberton.h"

/**
 * jack_bauer - Have you seen 24 hours on Fox? Becasue I didn't.
 *
 * Return: Nothing. Its a void method.
 */

void jack_bauer(void)
{
	int hours = 00;
	int minutes = 00;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar(10);

			minutes++;
		}
		hours++;
		minutes = 00;
	}
}
