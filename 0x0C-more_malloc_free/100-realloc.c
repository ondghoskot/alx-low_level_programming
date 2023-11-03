#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory block
 * @old_size: size of previous memory block in bytes
 * @new_size: size of new memory block to allocate
 * Return: pointer to new memory block or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		a[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return ((void *)a);
}
