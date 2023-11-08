/**
 * print_name - prints name using function pointer
 * @name: the name to print
 * @f: function that prints a name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
