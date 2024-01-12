#include "lists.h"

/**
 * delete_dnodeint_at_index - deleted a node at a given index
 * @head: head of the dll
 * @index: the given index
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeA;

	nodeA = *head;
	if (index == 0 && nodeA)
	{
		*head = nodeA->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(nodeA);
		return (1);
	}
	while (nodeA && index > 0)
	{
		nodeA = nodeA->next;
		index--;
	}
	if (index == 0 && nodeA)
	{
		nodeA->prev->next = nodeA->next;
		if (nodeA->next)
			nodeA->next=>prev = nodeA->prev;
		free(nodeA);
		return (1);
	}
	return (-1);
}
