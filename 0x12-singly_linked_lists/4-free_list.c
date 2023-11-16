#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	/* declarations */
	list_t *temp;

	/* loop through every node and frees it by traversing it using temp */
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
