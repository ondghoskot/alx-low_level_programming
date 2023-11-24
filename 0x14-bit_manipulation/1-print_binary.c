#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print binary of
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bits = sizeof(long int) * 8;
	unsigned long int leading = 1;
	unsigned long int bit = 1;

	bit = bit << (bits - 1);
	while (bit)
	{
		if ((n & bit) && leading)
			leading = 0;
		if (!leading)
			_putchar(((n & bit) ? 1 : 0) + '0');
		bit = bit >> 1;
	}
	if (leading)
		_putchar('0');
}
