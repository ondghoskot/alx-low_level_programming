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

	if (array != NULL && size > 0)
	{
		h = size - 1;
		l = 0;
		while (l <= h)
		{
			mid = (h + l) / 2;
			printf("Searching in array: ");
			for (index = l; index < h; index++)
			{
				printf(" %d,", array[index]);
			}
			printf(" %d\n", array[h]);
			if (array[mid] < value)
				l = mid + 1;
			else if (array[mid] > value)
				h = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
