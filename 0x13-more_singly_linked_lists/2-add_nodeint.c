#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to the head of a linked list
 * @n: integer that the new node should hold
 * Return: pointer to a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = mailloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
