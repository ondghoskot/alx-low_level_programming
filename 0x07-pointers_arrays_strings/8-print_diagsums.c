#include <stdio.h>

/**
 * print_diagsums - prints sum of a square matrix's diagonals
 * @a: pointer to a square matrix
 * @size: size of the square matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			if (i == j)
			{
				s1 += a[i * size + j];
			}
			if (j == size - i - 1)
			{
				s2 += a[i * size + j];
			}
			j++;
		}
		i++;
	}
	printf("%d, %d\n", s1, s2);
}
