#include "lists.h"

/**
 * listint_len - calculates number of elements in a linked listint_t list
 *@h: head of linked list
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
