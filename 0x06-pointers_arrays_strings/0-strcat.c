#include "main.h"

/**
 * _strcat - concatenates two strings together
 * @dest: first string
 * @src: appended string
 * Return: concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = 0;
	int len2 = 0;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	};
	while (src[j] != '\0')
	{
		len2++;
		j++;
	}
	while (k < len2)
	{
		dest[len1 + k] = src[k];
		k++;
	}
	return (dest);
}
