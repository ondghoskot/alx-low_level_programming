#include "lists.h"

/**
 * list_len - prints number of elements of a list_t list
 * @h: head of linked list
 * Return: length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
