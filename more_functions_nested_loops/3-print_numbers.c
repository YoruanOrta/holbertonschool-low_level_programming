#include "main.h"

/**
 * print_numbers - prints the numbres form 0 to 9 followed by a dollar sign
 *
 * Return: void
**/

void print_numbers(void)
{
	char output[] = "0123456789$";

	int i;

	for (i = 0; i < 11; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
}
