#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	int len;

	new_str = strdup(str);
	if (new_str == NULL)
	{
	return (NULL);
	}

	len = 0;
	while (str[len])
	{
	len++
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	free(new_str);
	return (NULL);
	}

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
