#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers form n to 98.
 * @n: The starting point of the sequence.
 *
 * The function prints numbers form n to 98, in order,
 * separated by commas and spaces. If n is greater than 98,
 * it counts down to 98.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
}
