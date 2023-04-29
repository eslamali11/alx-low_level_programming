#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 *
 * @head: the head
 * @n: the data
 *
 * Return: a new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *ptr, *tmp;

	ptr = head;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = tmp;
	return (*head);
}
