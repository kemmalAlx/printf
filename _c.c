#include "main.h"

/**
 * print_c - a function that handle conversion specifiers
 * of character %c
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 * @ret: length of character printed
*/
void print_c(va_list ap, int *ret)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c, ret);
}
