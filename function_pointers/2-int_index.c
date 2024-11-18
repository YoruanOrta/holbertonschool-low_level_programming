#include <stddef.h>

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: the index of te first element for which the cmp function does
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int  i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
