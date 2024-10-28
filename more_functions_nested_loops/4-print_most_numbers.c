#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, excluding 2 an 4
 *
 *Return: void
**/

void print_most_numbers(void)
{
	char output[] = "01356789";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
}
