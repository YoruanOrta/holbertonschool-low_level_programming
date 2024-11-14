#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the elements of a struct dog.
 * @d: pointer to the struct dog to be printed.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)  /* If the pointer to struct dog is NULL, do nothing */
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.1f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
