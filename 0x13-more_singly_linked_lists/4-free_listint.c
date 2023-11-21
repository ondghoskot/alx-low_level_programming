#include "lists.h"

/**
 * free_listint - frees a linstint_t list
 * @head: pointer to head of a listint_t list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
