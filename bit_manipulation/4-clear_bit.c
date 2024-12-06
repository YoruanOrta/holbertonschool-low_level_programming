#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the number to modify.
 * @index: The index (starting from 0) of the bit to set to 0.
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
