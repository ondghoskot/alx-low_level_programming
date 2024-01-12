#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of the dll
 * @head: node to add to the ddl
 * @n: data of added node
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *before_last_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (head != NULL && *head != NULL)
	{
		before_last_node = *head;
		while(before_last_node->next != NULL)
			before_last_node = before_last_node->next;
		before_last_node->next = new_node;
		new_node->prev = before_last_node;
	}
	else
	{
		new_node->prev = NULL;
		new_node = *head;
	}
	return (new_node);

}
