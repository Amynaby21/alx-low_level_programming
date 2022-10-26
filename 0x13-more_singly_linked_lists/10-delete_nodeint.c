#include "lists.h"

/**
 * delete_nodeint_at_index - Delestes a node from a linked list at
 * a given position
 * @head: A pointer to the first node
 * @index: The position of the node to delete
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next1;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	next1 = temp->next;
	temp->next = next1->next;
	free(temp);
	return (1);
}
