#include "main.h"

/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index (starting from 0) of the bit to get.
 *
 * Return: The value of the bit at index `index` (either 0 or 1),
 *         or -1 if an error occurs (e.g., if `index` is out of range).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
