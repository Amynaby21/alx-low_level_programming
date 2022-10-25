#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: The linked list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	while (h != NULL)
	{
		n++;
		putchar(n%10 + '0');
		h = h->next;
	}
	return (n);
}
