#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be processed
 *
 * Return: void
**/

void puts_half(char *str)
{
	int lenght = 0;
	int start;
	int i;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	if (lenght % 2 == 0)
	{
		start = lenght / 2;
	}
	else
	{
		start = (lenght - 1) / 2 + 1;
	}
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
