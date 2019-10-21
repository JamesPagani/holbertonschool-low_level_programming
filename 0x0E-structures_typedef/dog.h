#ifndef DOG_H
#define DOG_H
/**
 * struct dog - General structure of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: None
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Holberton's putchar */
int _putchar(char c);

/* 0x0E Functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* void print_dog(struct dog *d); */
/* dog_t *new_dog(char *name, float age, char *owner); */
/* void free_dog(dog_t *d); */

#endif
