#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return write(1, &c, sizeof(c) + 1);
}
int main(void)
{
	const char *str = "_putchar\n";
	_putchar(str);
	return (0);
}
