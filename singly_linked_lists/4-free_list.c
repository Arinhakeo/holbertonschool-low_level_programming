#include <stdlib.h>
#include "lists.h"
/**
* free_list - Frees a list_t list.
* @head: Pointer to the first node of the list to free.
*
* Description: This function traverses a linked list,
* frees the string in each node if it was
*/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
