#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the parameter c checks if the char is lowercase
 *
 * Return: returns 1 if the condition is true, and 0 if letter is uppercase
 *
**/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
