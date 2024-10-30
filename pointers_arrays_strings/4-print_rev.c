#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @str: pointer to the string to be printed in reverse
 *
 * Return: void
**/

void print_rev(char *str)
{
	int lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	for (lenght--; lenght >= 0; lenght--)
	{
		_putchar(str[lenght]);
	}
	_putchar('\n');
}
