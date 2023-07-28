#include "main.h"

/**
 * print_number - prints a number
 *
 * @n: the number to be printed
 * @ret: length of character printed
*/
void print_number(int n, int *ret)
{
	unsigned int nbr = n;

	if (n < 0)
	{
		_putchar('-', ret);
		nbr = -nbr;
	}
	if (nbr >= 10)
		print_number(nbr / 10, ret);
	_putchar((nbr % 10) + '0', ret);
}

/**
 * print_d - a function that handle conversion specifiers
 *			of number d and i
 *
 * @ap: a list of argument pointing
 *		to the character to be printed
 * @ret: length of character printed
*/
void	print_d(va_list ap, int *ret)
{
	int nbr = va_arg(ap, int);

	print_number(nbr, ret);
}
