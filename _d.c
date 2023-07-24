#include "main.h"

/**
 * print_number - prints a number
 *
 * @n: the number to be printed
*/

void print_number(int n, int *ret)
{
	unsigned int nbr = n;

	if (n < 0)
	{
		_putchar('-');
		nbr = -nbr;
		(*ret)++;
	}
	if (nbr >= 10)
		print_number(nbr / 10, ret);
	_putchar((nbr % 10) + '0');
	(*ret)++;
}

void	print_d(va_list ap, int *ret)
{
	int nbr = va_arg(ap, int);
	print_number(nbr, ret);
}
