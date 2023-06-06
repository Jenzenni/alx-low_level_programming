#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at beginning of the linked list.
 * @head: Pointer to first node in the list.
 * @n: The data to be inserted in that new node.
 *
 * Return: Pointer to the new node, or NULL if there is no success.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
