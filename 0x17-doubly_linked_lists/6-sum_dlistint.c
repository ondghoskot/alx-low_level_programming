#include "lists.h"

/**
 * sum_dlistint - adds up the data in each node in dll
 * @head: ptr to first node in dll
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
