#include "lists.h"
#include <string.h>

/**
 * free_list - Frees a list_t list
 *
 * @head: A pointer to the first node
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
