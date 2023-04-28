#include "lists.h"

/**
 * free_listint - frees the list
 *
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(tmp);
	}
}
