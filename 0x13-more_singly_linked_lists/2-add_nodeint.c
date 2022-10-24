#include "lists.h"

/**
 * add_nodeint - Adds a new node at hte beginning of a linked list
 * @head: A pointer to the first node
 * @n: The new int node to add
 * Return: the address of the new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnOde;

	newnOde = malloc(sizeof(listint_t));

	if (newnOde == NULL)
		return (NULL);
	newnOde->n = n;
	newnOde->next = *head;
	*head = newnOde;

	return (newnOde);
}
