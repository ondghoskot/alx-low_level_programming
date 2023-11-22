#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint list
 * @head: head of linked list
 * @index: index of node to find
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index > 0 && head->next != NULL)
	{
		head = head->next;
		index--;
	}
	if (index == 0)
		return (head);
	return (NULL);
}
