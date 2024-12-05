#include "lists.h"

/**
 * print_dlistint - Write a function that prints all the elements
 * @h: the head pointer of the doubly linked list (a parameter)
 *
 * Return: The count
 *
**/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
