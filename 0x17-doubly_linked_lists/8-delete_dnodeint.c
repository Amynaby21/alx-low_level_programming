#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes at a given index
 * @head: A pointer to the head of the list
 * @index: The index of the node to delete
 *
 * Return: 1 if succeed or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_d = NULL;

	if (*head == NULL)
		return (-1);
	del_d = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(del_d);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (index != 0 && (del_d->next != NULL))
	{
		index--;
		del_d = del_d->next;
	}
	if (index == 0)
	{
		del_d->prev->next = del_d->next;
		if (del_d->next != NULL)
			del_d->next->prev = del_d->prev;
		free(del_d);
		return (1);
	}
	return (-1);
}
