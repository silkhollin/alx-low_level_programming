#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of list elements
 * @h: pointer to list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (n);
}
