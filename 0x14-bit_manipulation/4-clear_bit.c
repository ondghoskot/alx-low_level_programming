/**
 * clear_bit - sets value of bit to 0 at a given index
 * @n: pointer to number to set value of bit of
 * @index: index of bit to set
 * Return: 1 or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(long int) * 8;
	unsigned long int bit = 1;

	if (index >= bits)
		return (-1);
	bit = bit << index;
	*n = (*n & bit) ? *n - bit : *n;
	return (1);
}
