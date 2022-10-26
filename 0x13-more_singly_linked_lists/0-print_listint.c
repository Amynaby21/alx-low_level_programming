#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: The linked list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
