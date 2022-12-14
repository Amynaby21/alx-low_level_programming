#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position
 * in a linked list
 * @head: A pointer to the first node
 * @idx: The index where the node will be added
 * @n: The node to add
 * Return: NULL or the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1 = *head;
	listint_t *ptr2;
	unsigned int size = 0;

	ptr2 = malloc(sizeof(listint_t));

	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;

	if (idx == 0)
	{
		ptr2->next = ptr1;
		*head = ptr2;
		return (ptr2);
	}
	while (size < idx - 1)
	{
		if (ptr1 == NULL || ptr1->next == NULL)
			return (NULL);
		ptr1 = ptr1->next;
		size++;
	}
	ptr2->next = ptr1->next;
	ptr1->next = ptr2;
	return (ptr2);
}
