#include "lists.h"
/**
 * list_len - Gives the amount of elements in a list_s linked list
 * @h: Linked list head/entry point
 * Return: Amount of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t e_count = 0;

	while (h != NULL)
	{
		e_count++;
		h = h->next;
	}

	return (e_count);
}
