#include <stdlib.h>

/**
 * str_concat - allocate memory to concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2 = 0;
	int i, j;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	a = malloc(l1 + l2 + 1);
	if (a == NULL)
		return (a);
	for (i = 0; i < l1; i++)
		a[i] = s1[i];
	for (j = 0; i < l1 + l2; i++, j++)
		a[i] = s2[j];
	a[i] = '\0';
	return (a);
}
