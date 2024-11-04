#include "main.h"

/**
 * _strstr - Locates that locates a substring
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
