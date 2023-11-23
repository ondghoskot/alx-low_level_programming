/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: string pointing to 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or a char isn't 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;

	while (b && *b != '\0')
	{
		ui *= 2;
		if (*b == '0' || *b == '1')
			ui += *b - '0';
		else
			return (0);
	}
	return (ui);
}
