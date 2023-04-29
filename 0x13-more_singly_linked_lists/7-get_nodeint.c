#include "lists.h"

/**
 * get_nodeint_at_index - get node at *index nth
 *
 * @head: the head
 * @index: num of node
 *
 * Return: node at nth
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
