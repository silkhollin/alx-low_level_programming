#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - prints elements of doubly linked list
* @h: the linked list
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		num_nodes++;
	}
	return (num_nodes);
}
