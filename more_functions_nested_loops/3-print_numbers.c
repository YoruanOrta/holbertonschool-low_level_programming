#include "main.h"

/**
 * print_numbers - prints the numbres form 0 to 9 followed by a dollar sign
 *
 * Return: void
**/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
