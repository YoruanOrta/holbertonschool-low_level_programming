#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int c;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (c < nmemb * size)
	{
		ptr[c] = 0;
		c++;
	}

	return (ptr);
}
