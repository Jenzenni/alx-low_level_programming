#include "lists.h"
#include <stdio.h>

/**
 * listint_len - The number of elements in a linked lists to be returned.
 * @h: linked list of type listint_t to follow.
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
