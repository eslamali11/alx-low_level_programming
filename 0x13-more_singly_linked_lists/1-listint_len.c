#include "lists.h"

/**
 * listint_len - get the num of elements
 *
 * @h: the head
 *
 * Return: num of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;

	}
	return (count);
}
