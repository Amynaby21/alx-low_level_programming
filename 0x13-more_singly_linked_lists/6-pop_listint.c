#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: A pointer of the first node
 * Return: n or 0
 */

int pop_listint(listint_t **head)
{
	int *cnOde;
	int pnOde;

	if (*head == NULL)
		return (0);

	cnOde = *head;
	pnOde = (*head)->next;
	*head = (*head)->next;

	free(cnOde);

	return (pnOde);
}
