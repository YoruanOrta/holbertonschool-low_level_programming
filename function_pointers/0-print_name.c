#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name of the person
 * @f: function pointer that defines how the name is printed
 *
 * Return: nothing
**/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
