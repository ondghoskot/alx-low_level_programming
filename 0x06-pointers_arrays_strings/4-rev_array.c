#include "main.h"

/**
 * reverse_array - reverses an array of n integers
 * @a: given array
 * @n: number of integers in th array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
