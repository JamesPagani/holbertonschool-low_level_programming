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
 * add_node - Adds another node to the list
 * @head: The head of the linked list
 * @str: String to insert into the element
 * Return: Pointer to the newly created element of the list or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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

	new->next = *head;
	*head = new;
	return (*head);
}
