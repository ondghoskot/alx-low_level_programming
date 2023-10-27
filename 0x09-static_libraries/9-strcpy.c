#include "main.h"

/**
 * _strcpy - copies string to the first argumet
 * @dest: buffer that receives the copied string
 * @src: string to copy
 * Return: the pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
