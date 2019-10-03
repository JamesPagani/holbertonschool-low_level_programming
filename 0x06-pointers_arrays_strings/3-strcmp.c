#include "holberton.h"

/**
 * _strcmp - Compares the value (per char) of one string (s1) with another (s2)
 * @s1: String to compare
 * @s2: Reference string
 *
 * Return: Negative integer is s1's value is less than s2's one, positive
 * integer if s1's value is greater than s2's one and zero is s1's value is
 * equal to s2's
 */

int _strcmp(char *s1, char *s2)
{
	int count_s1;
	int count_s2;
	int result;

	count_s1 = 0;
	count_s2 = 0;
	result = 0;

	while (*(s1 + count_s1) != '\0' && *(s2 + count_s2) != '\0')
	{
		result = *(s1 + count_s1) - *(s2 + count_s2);
		if (*(s1 + count_s1) != *(s2 + count_s2))
			break;
		count_s1++;
		count_s2++;
	}
	return (result);
}
