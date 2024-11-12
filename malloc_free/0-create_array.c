#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates and initializes an array of chars.
 * @size: The size of the array to create.
 * @c: The char to initialize each element of the array with.
 *
 * Return: A pointer to the array, or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
