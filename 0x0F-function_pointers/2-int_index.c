/**
 * int_index - searches for integer in array
 * @array: give array to search
 * @size: size of the array
 * @cmp: function to compare an int
 * Return: index of int or -1 if failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
