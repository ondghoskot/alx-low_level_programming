/**
 * factorial - calculates the factorial of a number
 * @n: given integer
 * Return: factorial of num, -1 if num < 0
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n == 1 || n == 0)
			return (1);
		else
			return (-1);
	}
	return (n * factorial(n - 1));
}
