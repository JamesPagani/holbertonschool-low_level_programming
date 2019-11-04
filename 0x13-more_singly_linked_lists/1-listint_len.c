#include "lists.h"
/**
 * listint_len - Calculates the length of a listint_t list
 * @h: Head of the listint_t list
 * Return: Amount of elements of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
