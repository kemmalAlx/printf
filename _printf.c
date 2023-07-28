#include "main.h"

/**
 * helper - a function that handle onversions specifiers
 *
 * @ap: list of arguments
 * @format: the string
 * @ret: length of character printed
*/
void helper(va_list ap, char format, int *ret)
{
	if (format == 'c')
		print_c(ap, ret);
	else if (format == 's')
		print_s(ap, ret);
	else if (format == '%')
		_putchar('%', ret);
	else if (format == 'd' || format == 'i')
		print_d(ap, ret);
	else if (format == 'b')
		print_b(ap, ret);
	else
		print_autre(format, ret);
}

/**
 * _printf - a function that produces output
 *				according to a format.
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Return: return length of character printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, ret = 0;

	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			helper(ap, format[i + 1], &ret);
			i += 2;
			continue;
		}
		else
			_putchar(format[i], &ret);
		i++;
	}
	va_end(ap);
	return (ret);
}
