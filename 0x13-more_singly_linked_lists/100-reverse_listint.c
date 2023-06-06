#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses linked list.
 * @head: Pointer to first node in the list.
 *
 * Return: Pointer to first node in a  new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
