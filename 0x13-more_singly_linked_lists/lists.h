#ifndef LISTS_H
#define LISTS_H

/* used C libraries */
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct list_s *next;
} listint_t;

/* prototypes */
int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
