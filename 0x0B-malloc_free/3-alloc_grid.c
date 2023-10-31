#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimentional array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to our array
 */
int **alloc_grid(int width, int height)
{
	int r;
	int c;
	int f;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(*a));
	if (a == NULL)
		return (a);
	for (r = 0; r < height; r++)
	{
		a[r] = malloc(width * 4);
		if (a[r] == NULL)
		{
			for (f = 0; f < r; f++)
				free(a[f]);
			free(a);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			a[r][c] = 0;
	}
	return (a);
}
