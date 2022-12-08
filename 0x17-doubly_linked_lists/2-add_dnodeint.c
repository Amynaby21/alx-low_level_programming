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

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	if (*head == NULL)
	{
		*head = n_node;
		n_node->prev = NULL;
		n_node->next = NULL;
		return (n_node);
	}
	n_node->next = (*head);
	n_node->prev = NULL;
	(*head)->prev = n_node;
	(*head) = n_node;
	return (n_node);
}
