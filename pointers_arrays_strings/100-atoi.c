#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Return: the conveted integer
**/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{

		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			number = number * 10 + (*s - '0');

			if (number > 2147483648)
			{
				return ((sign == -1) ? 0 : -1);
			}
		}
		else if (started)
		{
			break;
		}
		s++;
	}

	return (sign * number);
}
