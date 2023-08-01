#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in the list
 * @head: first node in the linked list
 *
 * Return: returns the sum of all data elements
 */

int sum_listint(listint_t *head)
{
	int toto = 0;
	listint_t *curr = head;

	while (curr)
	{
		toto += curr->n;
		curr = curr->next;
	}

	return (toto);

}
