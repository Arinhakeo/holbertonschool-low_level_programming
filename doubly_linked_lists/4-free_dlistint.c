#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Pointer to the pointer to the head of the list.
* @n: The integer value for the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t)); /* Alloue de la mémoir */
	if (new_node == NULL)
	return (NULL); /* Retourne NULL si l'allocation échoue */

	new_node->n = n; /* Initialiser les membres du nouveau noeud */
	new_node->next = NULL; /* dernier noeud si le suivant est NULL */

	if (*head == NULL)
	{
	new_node->prev = NULL; /* Si NULL, défiit le nouveau noeud comme tête */
	*head = new_node;
	return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	temp = temp->next; /* Parcour la liste jusqu'au dernier noeud */

	temp->next = new_node; /* Ajoute le nouveau noeud*/
	new_node->prev = temp; /* pointe vers le précédent dernr noeud*/

	return (new_node);
}
