#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
int main(void)
{
	const char *str = "_putchar";
	int i;

	while (str[i] != '\0') 
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
