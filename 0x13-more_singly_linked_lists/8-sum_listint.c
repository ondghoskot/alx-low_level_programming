#include "lists.h"

/**
 * sum_listint - sum of all integers in a linked list
 * @head: head of a linked list
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
