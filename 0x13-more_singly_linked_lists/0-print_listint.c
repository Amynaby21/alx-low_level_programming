#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: The linked list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnOde  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnOde++;
		h = h->next;
	}
	return (cnOde);
}
