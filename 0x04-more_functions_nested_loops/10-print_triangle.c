#include "main.h"

/**
 * print_triangle - prints a triangle using '#'
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size - i - 1)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
			while (j < i + 1)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
