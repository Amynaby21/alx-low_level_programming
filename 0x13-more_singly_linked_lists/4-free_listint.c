#include "lists.h"

/**
 * free_listint - Frees a linked list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->next);
		free(head);
		head = head->next;
	}
}
