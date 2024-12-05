#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: the pointer that points to the first node of the list.
 *
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
