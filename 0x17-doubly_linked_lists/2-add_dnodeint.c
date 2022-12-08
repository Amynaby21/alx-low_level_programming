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
	dlistint_t *n_node;

	if (n_node == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	n_node->n = n;
	n_node->prev = NULL;
	n-node->next = *head;
	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = n_node;
	return (n_node);
}
