/**
 * get_bit - gived the value of a bit at a given index
 * @n: number with bits to check
 * @index: index to check
 * Return: value of bit at the indx or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(int) * 8;
	unsigned int bit = 1;

	if (index >= bits)
		return (-1);
	return ((bit << index & n) ? 1 : 0);
}
