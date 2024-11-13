#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: the size of memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
