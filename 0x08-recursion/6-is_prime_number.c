int prime_recursive(int n, int i);

/**
 * is_prime_number - checks if a number is prme or not
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_recursive(n, 3));
}

/**
 * prime_recursive - looks for factors of n
 * @n: the given number
 * @i: iterations (starts at 3)
 * Return: 0 if there are factors, 1 otherwise
 */
int prime_recursive(int n, int i)
{
	if (n == 2)
		return (1);
	if (n <= 1 || n % 2 == 0 || (n % i == 0 && n != i))
		return (0);
	if (i < n)
		return (prime_recursive(n, i + 2));
	return (1);
}
