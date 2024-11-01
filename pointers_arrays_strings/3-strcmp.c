#include "main.h"

/**
 * _strcmp - Compares
 * @s1: first string
 * @s2: second string
 *
 * Return: Negative value if s1 < s2, positive value if s1 > s2, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
