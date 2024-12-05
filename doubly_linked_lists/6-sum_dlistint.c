#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
