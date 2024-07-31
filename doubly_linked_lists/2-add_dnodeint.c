#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));	/*Alloue de la mémoird*/
	if (new_node == NULL)
	return (NULL);	/* Retourne NULL si l'allocation échoue*/

	new_node->n = n;/*Initialise les membres du nouveau noeud*/
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	(*head)->prev = new_node;/* Met a jour le pointeur précéde */

	*head = new_node;/* met a jour le pointeur de têt vers le noeud*/

	return (new_node);/* Retourne l'adresse du nouveau noeuds*/
}
