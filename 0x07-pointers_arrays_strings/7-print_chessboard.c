#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2 dimentional array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
