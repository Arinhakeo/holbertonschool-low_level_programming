#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i;

    // Si la liste est vide ou l'index est invalide, retourner -1
    if (*head == NULL)
        return (-1);

    // Suppression du premier nœud
    if (index == 0)
    {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    // Trouver le nœud à supprimer
    for (i = 0; temp != NULL && i < index; i++)
        temp = temp->next;

    // Si l'index est hors limites, retourner -1
    if (temp == NULL)
        return (-1);
