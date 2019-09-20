#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */

/*
 * ASCII VALUES
 *
 * 0 to 9 = 48 to 57
 * , = 44
 * Space = 32
 * NewLine = 10
 */
int main(void)
{
	int duo2 = 0;
	int duo1 = 1;

	while (duo2 <= 98)
	{
		while (duo1 <= 99)
		{
			putchar(duo2 / 10 + 48);
			putchar(duo2 % 10 + 48);
			putchar(32);
			putchar(duo1 / 10 + 48);
			putchar(duo1 % 10 + 48);

			if (!(duo2 == 98 && duo1 == 99))
			{
				putchar(44);
				putchar(32);
			}

			duo1++;
		}

		duo2++;
		duo1 = duo2 + 1;
	}

	putchar(10);

	return (0);
}
