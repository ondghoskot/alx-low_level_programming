/**
 * _strspn - gets the length of a prefix substring
 * @s: string where to find the initial segment
 * @accept: set of characters that you want to search for in s
 * Return: number of bytes that intersected between s and accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int hit = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				hit = 1;
				break;
			}
			j++;
		}
		if (hit == 1)
		{
			count++;
			i++;
			hit = 0;
		}
		else
		{
			break;
		}
	}
	return (count);
}
