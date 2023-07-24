#include "main.h"

void _putchar(char c)
{
	write(1, &c, 1);
}

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
void handl_C(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
}

void handl_S(va_list ap, int *ret)
{
	char *str;

	str = va_arg(ap, char *);
	_putstr(str, ret);
}

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
				handl_C(ap);
				ret++;
			}
			else if (format[i] == 's')
			{
				handl_S(ap, &ret);
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
