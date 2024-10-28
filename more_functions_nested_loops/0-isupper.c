#include "main.h"

/**
 * _isupper - checks for a uppercase character
 * @c: the parameter c checks if the char is lowercase
 *
 * Return: return 1 if c is uppercase, and 0 if is otherwise
 *
**/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
