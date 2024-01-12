#include "lists.h"

/**
 * free_dlistint - frees a dll
 * @head: ptr to a node in the dll
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodeA;

	while (head != NULL)
	{
		nodeA = head;
		head = head->next;
		free(nodeA);
	}
}
