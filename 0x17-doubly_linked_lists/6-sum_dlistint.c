#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data of a doubly linked list
 * @head: The head of the list
 *
 *Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_d = 0;

	if (head == NULL)
		return (sum_d);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum_d);
}
