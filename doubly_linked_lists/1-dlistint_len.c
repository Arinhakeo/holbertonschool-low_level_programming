#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;/*Parcourt la liste et compte chaque éléme*/

	while (h != NULL)
	{
	count++;	/* Incrémente le compteur de oeuds*/
	h = h->next;	/*Passe au nœud suivan*/
	}

	return (count);  /*Retourne le nombre total de noeuds*/
}
