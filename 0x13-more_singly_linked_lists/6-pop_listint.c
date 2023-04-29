#include "lists.h"

/**
 * pop_listint - free head node
 * @head: the head
 *
 * Return: if NULL -> 0, else data
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int i;

	if (*head == NULL)
		return (0);

	t = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(t);
	return (i);
}
