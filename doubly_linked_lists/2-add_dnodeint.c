#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Write a function that adds a new node at the beginning
 * @n: The value of the node
 * @head: Set the next pointer to the current head
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
