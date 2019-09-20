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
	int hundred = 48;
	int tenth = 49;
	int unit = 50;

	while (hundred <= 55)
	{
		while (tenth <= 56)
		{
			while (unit <= 57)
			{
				putchar(hundred);
				putchar(tenth);
				putchar(unit);

				if (!(hundred == 55 && tenth == 56 && unit == 57))
				{
					putchar(44);
					putchar(32);
				}

				unit++;
			}

			tenth++;
			unit = tenth + 1;
		}

		hundred++;
		tenth = hundred + 1;
		unit = hundred + 2;
	}
	putchar(10);

	return (0);
}
