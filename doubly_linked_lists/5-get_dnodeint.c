#include "lists.h"
/**
* get_dnodeint_at_index - Renvoie le noeud.
* @head: Pointeur vers le premier noeud de la liste.
* @index: Index du noeud
*
* Return: Pointeur vers le noeud recherché, ou NULL si le oeud  n'existe pas.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0; /* Initialiser le compteur de noued */

	while (head != NULL)
	{
	if (count == index) /* Vérifir si le oeu courant est celui recherché */
	return (head); /* Retourne le noeud trouvé */
	head = head->next; /* Passe au noeud suivant */
	count++; /* Incrément le compteur */
	}

	return (NULL); /* Retourne NULL si le noeud a l'index donné n'existe pas */
}
