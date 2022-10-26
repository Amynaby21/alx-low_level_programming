#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: A pointer to the first node
 * @index: The index of the node
 * Return: the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (cnt < index)
	{
		if (head == NULL)
			return (NULL);
		cnt++;
		head = head->next;
	}
	return (head);
}
