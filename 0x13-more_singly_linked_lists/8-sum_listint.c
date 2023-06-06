#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - Calculates the sum of the total data in listint_t list.
 * @head: First node in a linked list.
 *
 * Return: Resulting sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
