#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the destination memory area
 * @src: the copied memory area
 * @n: number of bytes copied
 * Return: dest with the copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
