#include "lists.h"
#include <stdlib.h>
/**
 * my_strdup - a replica of strdup
 * @src: the source to copy
 * Return: new str
**/
char *my_strdup(const char *src)
{
	size_t length = 0;
	char *new_str;
	size_t i;

	if (src == NULL)
		return (NULL);

	while (src[length])
		length++;
	new_str = malloc(length + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		new_str[i] = src[i];

	return (new_str);
}

/**
 * add_node_end - the name of function
 * @head: the head.....
 * @str: the string......i think
 * Return: new_node
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = my_strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
