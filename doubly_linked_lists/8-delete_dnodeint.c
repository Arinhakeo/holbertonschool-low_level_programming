#include "lists.h"
/**
* struct dlistint_s - doubly linked list
* @n: integer
* @prev: points to the previous node
* @next: points to the next node
*
* Description: doubly linked list node structure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)/* Si la liste est vide */
return (-1);

while (current != NULL && i < index)/* Parcourir jusqu a l'index */
{
current = current->next;
i++;
}

if (current == NULL)/* Si l'index est hors de porté*/
return (-1);

if (current == *head)/* Si le noeud a supprimer est le head*/
{
*head = current->next;/* Deplace le head vers le next noeud*/
if (*head != NULL)
(*head)->prev = NULL;/* le nouveau noeud n'a pas de prev
}
else
{
if (current->prev != NULL)
current->prev->next = current->next;/* relie le noeud prev au next*/
if (current->next != NULL)
current->next->prev = current->prev;/* relie le noeud next au prev */
}

free(current);

return (1);
}
