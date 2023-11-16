#include "lists.h"

/**
 * print_list - prints elements of a list_t list
 * @h: head of linked list
 * Return: the number of nodes or [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
