#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: A pointer of the first node
 * Return: n or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nOde;

	if (*head == NULL)
		return (0);

	temp = *head;
	nOde = (*head)->next;
	*head = (*head)->next;

	free(temp);

	return (nOde);
}
