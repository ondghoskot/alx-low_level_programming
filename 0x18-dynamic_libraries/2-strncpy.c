#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the overwritten string
 * @src: the copied string
 * @n: number of characters to copy
 * Return: copied string in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
