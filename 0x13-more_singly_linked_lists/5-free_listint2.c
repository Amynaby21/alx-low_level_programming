#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head)
	{
		*head = (*head)->next;
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
