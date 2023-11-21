#include "lists.h"

/**
 * pop_listint - deletes the headnode of a listin_t list
 * @head: pointer to the head of the linked list
 * Return: head of the node's integer n
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (n);
}
