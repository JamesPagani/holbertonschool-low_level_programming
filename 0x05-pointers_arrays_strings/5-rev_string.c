#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int count1;
	int count2;
	char temp;

	count1 = 0;
	count2 = 0;

	while (*(s + count1) != '\0')
	{
		count1++;
	}

	while (count2 < count1)
	{
		temp = *(s + count2);
		*(s + count2) = *(s + count1 - 1);
		*(s + count1 - 1) = temp;
		count1--;
		count2++;
	}
}
