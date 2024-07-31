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

	new_node = malloc(sizeof(dlistint_t));/*Alloue de la mémoireau  noeu*/
	if (new_node == NULL)
	return (NULL);/*Retourne NULL si echec*/

	new_node->n = n;/*Initialiser les membres du nouveau noeud*/
	new_node->next = NULL;

	if (*head == NULL)/*Si la liste est vide, définr le nouvea noeu*/
	{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
	}

	temp = *head;/* Parcourla liste jusqu_au dernier noeud*/
	while (temp->next != NULL)
	temp = temp->next;

	temp->next = new_node;/*Ajoute le nouveau noeud a la fin*/
	new_node->prev = temp;

	return (new_node);
}
