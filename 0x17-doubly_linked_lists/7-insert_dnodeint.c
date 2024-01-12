#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at the given index
 * @h: ptr to first node of the  ddl
 * @idx: index to add the node at
 * @n: data of added node
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *before_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	before_node = *h;
	while (before_node && idx > 1)
	{
		before_node = before_node->next;
		idx--;
	}
	if (idx == 1)
	{
		new_node->next = before_node->next;
		new_node->prev = before_node;
		before_node->next = new_node;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
