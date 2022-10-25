#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: A pointer to the first node
 * @n: The node to add
 * Return: The address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnOde, *lastnOde;

	newnOde = malloc(sizeof(listint_t));
	if (newnOde == NULL)
		return (NULL);
	newnOde->n = n;
	newnOde->next = NULL;
	if (*head == NULL)
		*head = newnOde;
	else
	{
		lastnOde = *head;
		while (lastnOde->next != NULL)
		{
			lastnOde = lastnOde->next;
		}
		lastnOde->next = newnOde;
	}
	return (*head);
}
