#include <stdlib>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of the element in bytes
 * Return: pointer to allocatted memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	void *p = (void *)malloc(total_size);

	if (p == NULL)
		return (NULL);
	char *char_ptr = (char *)p;

	for (unsigned int i = 0; i < total_size; i++)
		char_ptr[i] = 0;
	return (p);

}
