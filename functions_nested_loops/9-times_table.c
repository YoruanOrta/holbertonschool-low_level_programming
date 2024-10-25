#include <stdio.h>
#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
**/

void times_table(void)
{
	int i, j, product;
	int digit1, digit2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j == 0)
			{
				digit1 = product + '0';
				_putchar(digit1);
			}
		else
		{
			_putchar(',');
			_putchar(' ');
			if (product < 10)
			{
				_putchar(' ');
			}
			digit2 = product + '0';
			_putchar(digit2);
		}
		}
	_putchar('\n');
	}
}
