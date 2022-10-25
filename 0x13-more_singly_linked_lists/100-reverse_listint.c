#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: A pointer to the first node
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front = *head;
	listint_t *back = NULL;

	if (head == NULL || front == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}
	(*head)->next = back;
	return (*head);
}
