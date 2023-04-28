#include "lists.h"

/**
 * add_node_end - Adds a node at the end
 *
 * @head: the head of the list.
 * @str: The string
 *
 * Return: NULL If fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int len;
	list_t *n, *last;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	d = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	n->str = d;
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = n;
	}
	return (*head);
}
