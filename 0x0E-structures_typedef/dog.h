#ifndef DOG_H
#define DOG_H

/* Holberton's putchar */
int _putchar(char c);

/**
 * struct dog - General structure of a doggo
 * @name: Name of the dog
 * @age: Age of the dog (in human years?)
 * @owner: Name of the dog's owner
 *
 * Description: D O G G O
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
