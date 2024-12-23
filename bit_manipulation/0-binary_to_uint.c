#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: string
 *
 * Return: The result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		return (0);

		result = result << 1;
		if (*b == '1')
		result = result | 1;

		b++;
	}
	return (result);
}
