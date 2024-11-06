#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number for which to find the square root.
 *
 * Return: root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function to find the square root recursively.
 * @n: the number for which to find the square root.
 * @guess: the current guess for the square root.
 *
 * Return: root of n, or -1 if n does not have a natural square root.
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	if (guess * guess > n)
	return (-1);

	return (_sqrt_helper(n, guess + 1));
}
