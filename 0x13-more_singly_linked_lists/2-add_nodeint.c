#include "lists.h"

/**
 * add_nodeint - add node to the begin
 *
 * @head: the head
 * @n: the node
 *
 * Return: new address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t);

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
