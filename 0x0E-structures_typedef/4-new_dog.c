#include "dog.h"
#include <string.h>

/**
 * new_dog - function that creates a new dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 * Return: NULL on failure, pointer to new dog otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	int i;
	dog_t new;

	for (i = 0; i < strlen(name); i++)
		new_name[i] = name[i];

	for (i = 0; i < strlen(owner); i++)
		new_owner[i] = owner[i];

	new.name = new_name;
	new.age = age;
	new.owner = new_owner;

	return (new);
}
