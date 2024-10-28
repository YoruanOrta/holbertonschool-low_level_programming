#include "main.h"

/**
 * print_numbers - prints the numbres form 0 to 9 followed by a new line
 *
 * Return: void
**/

void print_numbers(void)
{
	char digits[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(digits[i]);
	}
	_putchar('$');
	_putchar('\n');
}
