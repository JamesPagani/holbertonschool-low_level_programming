#include <stdio.h>

/**
 * is_prime - Checks if the number is prime or not
 * @n = Alleged prime factor
 *
 * Return: 1 if num is prime, 0 if not
 */

int is_prime(int n)
{
	int i;
	int out;

	for (i = 2; i <= n; i++)
	{
		if (num % i == 0)
			out = 0;
		else
			out = 1;
	}
	return (out);
}





/**
 * main- Entry point, also delivers the biggest prime factor of a  big number
 *
 * Return: 0
 */

int main(void)
{
	long num;
	int prime_num;
	int prime_check;
	int is_prime;
	long large_prime;

	num = 612852475143;
	prime_num = 2;

	while (num > 0)
	{
		if (is_prime(prime_num) && 
