#include "lists.h"
/**
* free_dlistint - frees a dlistint_t list
* @head: head of the list
* Return: NULL
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
