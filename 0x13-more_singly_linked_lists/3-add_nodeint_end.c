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

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;

	return (*head);
}
