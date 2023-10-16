#include "main.h"

/**
 * rev_string - reverses a given string inside the array
 * @s: the array of chars
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
