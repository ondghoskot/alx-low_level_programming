#include "main.h"

/**
 * _memset - fills memory with a constant byte b
 * @s: memory area (string or array)
 * @b: constant byte (usually 0)
 * @n: unisgned int to allocate how muvh bytes to fill
 * Return: filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
