#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning at the lst
 * @head: A pointer to the head of the list
 * @n: The new node
 *
 * Return: The address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t n_node;

	n_node->n = n;

	n_node->next = (*head);
	n_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = n_node;
	return (*head);
}
