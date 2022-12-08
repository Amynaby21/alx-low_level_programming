#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *print_dlistint - Prints all the element of a doubly linked list
 *@h: Head of the list
 *
 *Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
