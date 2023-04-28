#include "lists.h"

/**
 * free_list - just free the list
 *
 * @head: head pointer
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;

		free(head->str);

		free(head);

		head = i;
	}
}
