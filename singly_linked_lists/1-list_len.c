#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: The parameter that represents the head of the linked list.
 *
 * Return: The count
**/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
