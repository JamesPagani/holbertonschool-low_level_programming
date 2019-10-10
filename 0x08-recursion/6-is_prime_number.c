#include "holberton.h"
/**
 * prime_checker - Tests the given number if it is prime or not
 * @trgt: Number to check if it is prime
 * @n: Current number iteration (always starts with two)
 * Return: 1 if n is prime, 0 if not
 */
int prime_checker(int trgt, int n)
{
	if (n >= trgt)
		return (1);
	else if (trgt % n == 0)
		return (0);

	return (prime_checker(trgt, n + 1));
}

/**
 * is_prime_number - Determines is a given number i prime or not
 * @n: Integer nubmer
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}
