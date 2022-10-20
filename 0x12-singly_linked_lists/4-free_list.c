#include "lists.h"
#include <string.h>

/**
 * free_list - Frees a list_t list
 *
 * @head: A pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		temp = head;
		free(head->str);
		free(temp);
		temp = head->next;
	}
}
