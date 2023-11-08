#include <stddef.h>

/**
 * array_iterator - executes function on each elem of an array
 * @array: given array
 * @size: size of the array
 * @action: the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
