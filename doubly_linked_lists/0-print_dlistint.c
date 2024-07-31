#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: Pointer to the head of the doubly linked list.
*
* Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;// Parcourt la liste et imprime chaque élément

	while (h != NULL)
	{
	printf("%d\n", h->n);	// Affiche la valeur de l'élément actuel
	count++;	// Incrémente le compteur de nœuds
	h = h->next;	// Passe au nœud suivant
	}

	return (count);	// Retourne le nombre total de noeuds
}
