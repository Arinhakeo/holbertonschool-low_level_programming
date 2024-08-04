#include "lists.h"
/**
* sum_dlistint - Calculates the sum of all the data (n).
* @head: Pointer to the first node of the list.
*
* Return: The sum of all the data (n). Returns 0 if is empty.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
