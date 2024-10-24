#include <stdio.h>
#include "main.h"

/**
 * _isalpha - cheks for a alphabetic character
 * @c: The character to check
 *
 * Return: return 1 if c is a letter , lowercase or uppercase, and 0 otherwise
 *
**/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
