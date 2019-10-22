#include "dog.h"
/**
 * _strlen - Counts the lenght of the string
 * @s: String to analyze
 *
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * _strcpy - Copies the string from a source to a destination
 * @dest: Where to copy the string
 * @src: String to copy
 *
 * Return: dest's pointer
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (*src != '\0')
	{
		*(dest + count) = *src;
		src++;
		count++;
	}
	*(dest + count) = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *out;

	out = malloc(sizeof(dog_t));
	if (out == NULL)
		return (NULL);
	out->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (out->name == NULL)
	{
		free(out);
		return (NULL);
	}
	out->name = _strcpy(out->name, name);

	out->age = age;

	out->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (out->owner == NULL)
	{
		free(out->name);
		free(out);
		return (NULL);
	}
	out->owner = _strcpy(out->owner, owner);

	return (out);
}
