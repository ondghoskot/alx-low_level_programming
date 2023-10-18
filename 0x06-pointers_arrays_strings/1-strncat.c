#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: amount of bits to take at most from src
 * Return: pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len1 = _strlen(dest);
	int len2 = _strlen(src);

	while (src[i] != '\0' && i < n)
	{
		dest[len1 + i] = src[i];
		i++;
	}
	dest[len1 + i] = '\0';
	return (dest);
}
