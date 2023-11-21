#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL && h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
