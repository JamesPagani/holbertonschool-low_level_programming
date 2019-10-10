#include "holberton.h"
/**
 * _strlen_recursion - Counts the length of a string (NULL char not included)
 * @s: Input string
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}



/**
 * reverse_scanner - Scans a string from the last char to the first one
 * @s: Input string
 * @n: palin_cheker's iteration
 * @i: This function's iteration
 * Return: Current character
 */
char reverse_scanner(char *s, int n, int i)
{
	if (*(s + i + 1) == '\0')
		return (*(s - n + i));
	return (reverse_scanner(s, n, i + 1));
}

/**
 * palin_checker - Scans character per character if it is a palindrome
 * @s: Input string
 * @n: Current iteration
 * @size: Size of the string
 * Return: 1 if s is a palindrome, 0 if not
 */
char palin_checker(char *s, int n, int size)
{
	if (*(s + n) != reverse_scanner(s, n, 0))
		return (0);
	else if (n == size / 2)
		return (1);
	return (palin_checker(s, n + 1, size));
}

/**
 * is_palindrome - Determines is a string is a palindrome or not
 * (A sentence that is written the same both normal and reverse)
 * @s: String to check
 * Return: 1 if the string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int size;

	size = _strlen_recursion(s);
	if (*s == '\0')
		return (1);
	return (palin_checker(s, 0, size));
}
