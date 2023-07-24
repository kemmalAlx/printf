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
			i++;
			if (format[i] == 'c')
			{
				print_c(ap);
				ret++;
			}
			else if (format[i] == 's')
			{
				print_s(ap, &ret);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				ret++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
			}
			i++;
			continue;
		}
		else
			_putchar(format[i]);
		i++;
		ret++;
	}
	va_end(ap);
	return (ret);
}
