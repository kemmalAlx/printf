#include "main.h"

/**
 * print_c - a function that handle conversion specifiers
 * of character %c
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
*/
void print_c(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
}
