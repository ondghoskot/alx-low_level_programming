#include "search_algos.h"

/**
 * binary_search - performs binary search on an array
 * @array: array to search
 * @size: size of the array
 * @value: value to look for
 * Return: index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, h, l, mid;

	if (array == NULL || size == 0)
		return (-1);	
	h = size - 1;
	l = 0;
	while (l <= h)
	{
		mid = (h + l) / 2;
		printf("Searching in array: ");
		for (index = l; index <= h; index++)
		{
			mid = (h + l) / 2;
			printf("Searching in array: ");
			for (index = l; index <= h; index++)
			{
				printf(index < h ? "%d, " : "%d\n", array[index]);
			}
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				h = mid - 1;
			if (index < h)
				printf(" %d,", array[index]);
			else
				printf(" %d\n", array[index]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
