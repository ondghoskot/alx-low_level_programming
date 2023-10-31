#include <stdlib.h>

/**
 * free_grid - free a 2 dimentional array
 * @grid: the array
 * @height: number of rows of our array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	height -= 1;
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
