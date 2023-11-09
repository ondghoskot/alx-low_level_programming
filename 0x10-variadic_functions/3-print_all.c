#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything of chosen types
 * @format: types of data
 */
void print_all(const char * const format, ...)
{
	va_list types;
	unsigned int i = 0;
	char *str, *sprt = "";

	if (format)
	{
		va_start(types, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sprt, va_arg(types, int));
					break;
				case 'i':
					printf("%s%d", sprt, va_arg(types, int));
					break;
				case 'f':
					printf("%s%f", sprt, va_arg(types, double));
					break;
				case 's':
					str = va_arg(types, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sprt, str);
					break;
				default:
					i++;
					continue;
			}
			sprt = ", ";
			i++;
		}
		va_end(types);
	}
	printf("\n");
}
