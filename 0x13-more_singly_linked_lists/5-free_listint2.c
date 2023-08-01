#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the linked list to be freed
 *
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}

	*head = NULL;
}

