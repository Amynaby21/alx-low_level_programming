#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at index
 * @head: The head of the list
 * @index: The index of the node
 *
 * Return: The node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (i < index - 1 && head != NULL)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);
	return (NULL);
}
