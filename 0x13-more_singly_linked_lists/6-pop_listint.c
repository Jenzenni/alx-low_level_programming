#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - The head node of a linked list to be deleted.
 * @head: Pointer to the first element in a linked list.
 *
 * Return: data inside the elements that was deleted,
 * or 0 if the list is void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
