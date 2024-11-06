#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is to be calculated.
 *
 * Return: the factorial of the number, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}
