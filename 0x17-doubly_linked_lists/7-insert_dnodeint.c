#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at a given position
 * @h: A pointer to the head
 * @idx: The index of the node
 * @n: The node to insert
 *
 * Return: The address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *n_node, *head = *h;

	if (h == NULL)
		return (NULL);
	head = *h;
	i = 0;
	while (i < idx - 2 && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (head != NULL)
	{
		n_node = malloc(sizeof(dlistint_t));
		n_node->n = n;
		n_node->prev = head;
		n_node->next = head->next;
		if (head->next != NULL)
		{
			head->next->prev = n_node;
		}
		head->next = n_node;
	}
	return (n_node);
}
