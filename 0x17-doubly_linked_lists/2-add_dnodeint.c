#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of the dll
 * @head: node to add to the ddl
 * @n: data of added node
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	new_node->n = n;
	new_node->prev = NULL;

	if (new_node == NULL)
		return (NULL);
	if (head != NULL)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	else
		new_node->next = NULL;
	return (new_node);

}
