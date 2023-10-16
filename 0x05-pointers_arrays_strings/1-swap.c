#include "main.h"

/**
 * swap_int - swaps the values of the two ints
 * @a: first value
 * @b: second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = b;
	*b = c;
}
