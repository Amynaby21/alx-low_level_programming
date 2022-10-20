#include "lists.h"
#include <string.h>

/**
 * free_list - Frees a list_t list
 *
 * @head: A pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;

	while (current != NULL)
	{
		current->next = current;
		free(current);
		free(current->str);
	}
}
