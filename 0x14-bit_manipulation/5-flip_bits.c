/**
 * flip_bits - calculates number of bits to flip to get desired number
 * @n: number to flip
 * @m: desired number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned long int bits = sizeof(long int) * 8;
	unsigned long int bit = 1;
	unsigned int count = 0;

	bit = bit << (bits - 1);
	while (bit)
	{
		if (bit & flip)
			count++;
		bit = bit >> 1;
	}
	return (count);
}
