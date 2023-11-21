#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t list
 * @head: pointer to the head of a linked list
 * @n: integer that the new node should hold
 * Return: pointer to a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new
	}
	else
		*head = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
