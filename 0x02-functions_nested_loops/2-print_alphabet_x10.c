#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet from 'a' to 'z' and '\n' 10 times.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
