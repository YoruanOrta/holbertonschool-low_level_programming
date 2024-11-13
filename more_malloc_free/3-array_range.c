#include <stdlib.h>
#include "main.h"
/**
 * array_range - the function name
 * @min: the name variable
 * @max: .......the max variable
 * Return: ptr to new array of NULL
**/
int *array_range(int min, int max)
{
	int *ar;
	int i, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	ar = malloc((size + 1) * sizeof(int));
	i = 0;
	n = min;
	if (ar == NULL)
	{
		return (NULL);
	}
	while (n <= max)
	{
		ar[i] = n;
		i++;
		n++;
	}
	return (ar);
}
