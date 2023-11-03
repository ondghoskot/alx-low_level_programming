#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of the element in bytes
 * Return: pointer to allocatted memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p, *charp;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	charp = (char *)p;
	for (i = 0; i < total_size; i++)
		charp[i] = 0;
	return ((void *)p);

}
