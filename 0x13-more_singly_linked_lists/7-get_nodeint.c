#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: A pointer to the first node
 * @index: The index of the node
 * Return: the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cnOde = head;
	unsigned int cnt = 0;

	while (cnOde != NULL)
	{
		if (cnt == index)
			return (cnOde->next);
		cnt++;
		cnOde = cnOde->next;
	}
	return (head);
}
