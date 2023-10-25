int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - calculates natural square root of given number
 * @n: given number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds the square root of n
 * @n: the given number
 * @i: iterations (starts from 1)
 * Return: square root, if it doesn't exist returns -1
 */
int find_sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (n / i == i && (n % i == 0))
		return (i);
	else if (i < n)
		return (find_sqrt(n, i + 1));
	return (-1);
}
