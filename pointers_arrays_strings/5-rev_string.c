#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the string to be reversed
 *
 * Return: void
**/

void rev_string(char *s)
{
	int lenght = 0;
	int i;
	char tmp;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = tmp;
	}
}
