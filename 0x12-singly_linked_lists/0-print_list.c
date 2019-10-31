#include "lists.h"
/**
 * print_list - Prints all the elements of the list_t list
 * @h: Head/entry point of the list
 * Return: Amount of elements on the list
 */

size_t print_list(const list_t *h)
{
	size_t e_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		e_count++;
		h = h->next;
	}
	return (e_count);
}
