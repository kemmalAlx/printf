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
	int i = 0, ret = 0, j;
	t_printf print[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_d},
		{0, NULL},
	};

	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 4)
			{
				if (format[i] == print[j].symbol)
				{
					print[j].print_symb(ap, &ret);
					break;
				}
				j++;
			}
			if (!print[j].symbol && format[i] != ' ')
			{
				_putchar('%', &ret);
				_putchar(format[i], &ret);
			}
			i++;
			continue;
		}
		else
			_putchar(format[i], &ret);
		i++;
	}
	va_end(ap);
	return (ret);
}
