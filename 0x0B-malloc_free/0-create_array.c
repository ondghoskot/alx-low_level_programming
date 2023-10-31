#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the first char of the array
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	if (!size)
	{
		return (NULL);
	}
	a = malloc(size);
	if (a != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(a + i) = c;
		}
	}
	return (a);
}
