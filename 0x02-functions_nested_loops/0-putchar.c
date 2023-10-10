#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* function that prints a single character using the write() operation */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
