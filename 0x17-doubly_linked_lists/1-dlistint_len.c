#include "lists.h"

/**
 * dlistint_len - Returns the length of a doubly linked list
 * @h: Head of the list
 *
 * Return: Number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
