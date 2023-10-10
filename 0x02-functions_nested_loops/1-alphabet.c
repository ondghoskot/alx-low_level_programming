#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'.
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
