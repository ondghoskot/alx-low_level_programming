#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the first int in the array
 * @max: the last int in the array
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		ptr[i] = min + i;
	return (ptr);
}
