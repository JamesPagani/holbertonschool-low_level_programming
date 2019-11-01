#include "lists.h"
/**
 * _strlen - Counts the lenght of the string
 * @s: String to analyze
 *
 * Return: Lenght of the string
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}


/**
 * add_node_end - Adds a new node at the end of the list
 * @head: Entry point of the linked list
 * @str: String to insert
 * Return: Pointer to the new element of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *old;
	list_t *new;

	old = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;

	if (old == NULL)
	{
		*head = new;
		new->next = old;
	}
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}

	return (*head);
}
