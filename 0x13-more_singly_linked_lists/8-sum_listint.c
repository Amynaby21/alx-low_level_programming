#include "lists.h"

/**
 * sum_listint - Sums n elements of a linked list
 * @head: A pointer to the first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
