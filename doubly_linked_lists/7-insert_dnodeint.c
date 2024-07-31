#include <stdlib.h>
#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node.
* @h: Double pointer to the head of the list.
* @idx: The index at which to insert the new node (0-based index).
* @n: The data for the new node.
*
* Return: The address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

/* Vérifie si l'index est valid*/
if (idx == 0)
{
/* Si l'index est 0, ajoute le nouveau noeud au début de la list*/
	return (add_dnodeint(h, n));
}

/* Crée un nouveau noeu*/
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

current = *h;
/* Traverse la liste pour trouver le noeud*/
for (i = 0; current != NULL && i < idx - 1; i++)
{
current = current->next;
}

/* Si le noeud à l'index précédent n'existe p*/
if (current == NULL || (i != idx - 1))
{
free(new_node);
return (NULL);
}

/* Insère le nouveau noeud dans la list*/
new_node->next = current->next;
new_node->prev = current;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
