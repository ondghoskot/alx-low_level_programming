#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to look in
 * @needle: the string to look for
 * Return: the intersection
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;

		while (needle[j] && haystack[j] && needle[j] == haystack[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
