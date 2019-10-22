#include "dog.h"
/**
 * free_dog - Frees a dog created using malloc
 * @d: Pointer to a previously created dog
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
