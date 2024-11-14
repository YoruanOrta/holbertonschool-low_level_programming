#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t struct or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len = 0, owner_len = 0;
	int i;

	while (name[name_len] != '\0')
	name_len++;

	while (owner[owner_len] != '\0')
	owner_len++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(name_len + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_len + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
	dog->name[i] = name[i];
	dog->name[name_len] = '\0';

	for (i = 0; i < owner_len; i++)
	dog->owner[i] = owner[i];
	dog->owner[owner_len] = '\0';

	dog->age = age;

	return (dog);
}
