#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at the beginning of a list_t list
 * @head: head node
 * @str: string to be duplicated and added to the new node
 * Return: pointer to new node or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* declarations */
	char *sdup;
	unsigned int i;
	list_t *new_node, *last_node;

	/* allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate the string */
	sdup = strdup(str);
	if (sdup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* calculate string length */
	for (i = 0; str[i] != '\0'; i++)
		;

	/* assign new values to new node */
	new_node->str = sdup;
	new_node->len = i;
	new_node->next = NULL;

	/* assign new node to the end of list_t */
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}
