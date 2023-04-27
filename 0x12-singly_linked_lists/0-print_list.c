#include "lists.h"

/*
 * print_list - print all elements in a linked list
 *
 * @h: the head
 * 
 * Return: numper of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			print ("[%d] %s\n", h->len, h->str);
	count++;
	h = h->next;
	}
	return(count);
}
