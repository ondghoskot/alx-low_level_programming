#include "lists.h"

/**
 * free_listint2 - frees a linstint_t list
 * @head: pointer to head of a listint_t list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (head != NULL && *head != NULL)
	{
		node = *head;
		*head = (*hea)d->next;
		free(node);
	}
}
