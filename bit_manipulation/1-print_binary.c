#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: represents the number whose binary representation we want to print
 *
 */

void print_binary(unsigned long int n)
{
	int bit_found = 0;
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask > 0)

	{
		if (n & mask)
		{
			putchar('1');
			bit_found = 1;
		}
		else if (bit_found)
		{
			putchar('0');
		}

	mask >>= 1;
	}

	if (!bit_found)
	{
		putchar('0');
	}

	putchar('\n');
}
