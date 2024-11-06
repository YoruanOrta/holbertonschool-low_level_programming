#include "main.h"
int prime(int n, int divi);
/**
 * is_prime_number - name of function
 *
 * @n: the number
 *
 * Return: 1 if the integer is prime otherwise 0
 *
**/
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - the name of function two checks if number is prime
 * @n: number
 * @divi: divisor
 * Return: 1 if the integer is prime otherwise 0
 *
 **/
int prime(int n, int divi)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divi * divi > n)
	{
		return (1);
	}
	if (n % divi == 0)
	{
		return (0);
	}
	else
		return (prime(n, divi + 1));
}
