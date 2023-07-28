#include "main.h"

/**
 * print_autre - a function that print
 * a non conversion specifiers
 *
 * @c: the character to be printed
 * @ret: length of character printed
*/
void print_autre(char c, int *ret)
{
	_putchar('%', ret);
	_putchar(c, ret);
}
