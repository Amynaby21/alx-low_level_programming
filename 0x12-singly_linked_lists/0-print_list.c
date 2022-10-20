#include "lists.h"

/**
 * print_list - Prints all the elements of list_t list
 *
 * @h: Linked list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nul)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (node);
}
