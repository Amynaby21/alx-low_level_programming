#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 *
 * @head: A pointer of the first node
 * @str: The string to add
 *
 * Return: The address of the new element,
 * or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnOde;
	int len;

	newnOde = malloc(sizeof(list_t));
	if (newnOde == NULL)
		return (NULL);
	newnOde->str = strdup(str);
	if (strdup(str) == NULL)
	{
		free(newnOde);
		return (NULL);
	}
	for (len = 0, str[len]; len++)
		;
	newnOde->len = len;
	newnOde->str = strdup(str);
	newnOde->next = *head;
	*head = newnOde;
	return (newnOde);
}
