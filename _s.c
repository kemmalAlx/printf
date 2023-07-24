#include "main.h"

/**
 * print_s - a function that handle conversion specifiers
 * of string %s
 *
 * @ap: a list of argument pointing
 *		to the character to be printed
 * @ret: length of character printed
*/
void print_s(va_list ap, int *ret)
{
	char *str;

	str = va_arg(ap, char *);
	if (!str)
		_putstr("(null)", ret);
	else
		_putstr(str, ret);
}
