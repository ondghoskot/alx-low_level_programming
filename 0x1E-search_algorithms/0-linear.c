#include "search_algos.h"

/**
 * linear_search - performs a linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of valuei if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i, index;

	index = -1;
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);
			if (array[i] == value)
			{
				index = i;
				return index;
			}
		}
	}
	return (index);
}
