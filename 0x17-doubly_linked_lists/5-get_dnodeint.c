#include "lists.h"

/**
 * get_dnodeint_at_index - finds node at index
 * @head: ptr to first node
 * @index: index of node to look for
 * Return: nth node od a dll
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;

	}
	if (index == 0)
		return (head);
	return (NULL);
}
