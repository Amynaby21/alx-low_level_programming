#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end of the list
 * @head: A pointer to the head of the list
 * @n: The new node
 *
 * Return: Address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *l_node;

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
	else
	{
		l_node = *head;
		while (l_node->next != NULL)
			l_node->next = l_node;
	}

	l_node->next = n_node;
	n_node->prev = l_node;
	n_node->next = NULL;
	return (n_node);
