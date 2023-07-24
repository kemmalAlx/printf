#include "main.h"

/**
 * _putchar - function that write a character
 *
 * @c: the character will be printed
*/
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _putstr - a function that write a string
 *
 * @str: the string will be printed
 * @ret: length of character printed
*/
void _putstr(char *str, int *ret)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
		(*ret)++;
	}
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
		_putchar(format[i]);
		i++;
		ret++;
	}
	va_end(ap);
	return (ret);
}
