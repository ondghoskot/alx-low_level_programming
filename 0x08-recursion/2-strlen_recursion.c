/**
 * _strlen_recursion - calculates length of sting using recursion
 * @s: given string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
