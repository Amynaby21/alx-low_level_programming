#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: The linked list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elm = 0;

	while (h != NULL)
	{
		elm++;
		h = h->next;
	}
	return (elm);
}
