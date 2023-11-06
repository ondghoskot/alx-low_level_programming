#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string
 * @s: string to copy
 * Return: pointer to copy of string
 */
char *_strcpy(char *s)
{
	int i = 0;
	char *p;

	while (s[i] != '\0')
		i++;
	p = malloc(i + 1);
	if (p)
	{
		for (; i >= 0; i--)
			p[i] = s[i];
	}
	return (p);
}

/**
 * new_dog - creates a new dog struct
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: dog struct or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);
	p->name = _strcpy(name);
	if (p->name  == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strcpy(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}
