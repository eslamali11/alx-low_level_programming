#include "lists.h"

/**
 * add_node - adds new node head
 *
 * @head: head pointer
 * @str: string to node
 *
 * Return: NULL on fail or address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *d_str;
	int len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	d_str = strdup(str);
	if (d_str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	newNode->str = d_str;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
