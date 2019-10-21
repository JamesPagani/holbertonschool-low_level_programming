#include "dog.h"
/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to a dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
