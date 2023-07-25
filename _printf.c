#include "main.h"

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
			if (format[i + 1] == 'c')
				print_c(ap, &ret);
			else if (format[i + 1] == 's')
				print_s(ap, &ret);
			else if (format[i + 1] == '%')
				_putchar('%', &ret);
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				print_d(ap, &ret);
			else if (format[i + 1] == 'b')
				print_b(ap, &ret);
			else
				print_autre(format[i + 1], &ret);
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
