#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node
 * @head: A pointer to the head of the doubly linked list
 * @index: The index of the node, starting from 0.
 *
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (current_index == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		current_index++;
	}

	return (NULL);
}
