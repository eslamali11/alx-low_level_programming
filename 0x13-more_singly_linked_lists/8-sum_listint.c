#include "lists.h"

/**
 * sum_listint - return the sum for all nodes
 *
 * @head: the head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0, i;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
