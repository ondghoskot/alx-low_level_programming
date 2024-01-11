#include "lists.h"

/**
 * print_dlistint - prints elements of doubly linked list
 * @h: pointer to doubly linked list (head)
 * Return: number of nodes in dll
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
