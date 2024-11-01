#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Check if the first character is a letter */
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}

	while (str[i] != '\0')
	{
		/* Capitalize letter after delimiters */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - ('a' - 'A');
			}
		}
		i++;
	}

	return (str);
}
