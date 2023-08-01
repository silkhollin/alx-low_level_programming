#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: head of the list
 *
 * Return: returns the data within the deleted node
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int toto;

	if (!head || !*head)
		return (0);

	toto = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;

	return (toto);
}

