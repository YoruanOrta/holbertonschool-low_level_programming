#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add function
 * @a: variable
 * @b: variable
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - add function
 * @a: variable
 * @b: variable
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - add function
 * @a: variable
 * @b: variable
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - add function
 * @a: variable
 * @b: variable
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - add function
 * @a: variable
 * @b: variable
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	}
	return (a % b);
}
