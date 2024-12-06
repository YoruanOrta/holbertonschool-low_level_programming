#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the number to modify.
 * @index: The index (starting from 0) of the bit to set to 1.
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
