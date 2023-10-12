#include "lists.h"
#include <stdio.h>
/**
* dlistint_len - finds number of nodes of doubly linked list
* @h: the linked list
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_nodes++;
	}
	return (num_nodes);
}
