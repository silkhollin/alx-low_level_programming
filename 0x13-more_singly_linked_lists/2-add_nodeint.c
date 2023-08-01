#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a list
 * @head: pointer to the first list node
 * @n: data for the new node at the beginning
 *
 * Return: pointer to the new node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head  = new;

	return (*head);

}
