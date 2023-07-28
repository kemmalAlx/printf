#include "main.h"
#include <stdio.h>

/**
 * bin - a function that convert number to binary
 *
 * @n: the number to be converted to binary
 * @ret: length of character printed
*/
void bin(unsigned int n, int *ret)
{
	/* step 1 */
	if (n > 1)
		bin(n / 2, ret);
	/* step 2 */
	print_number(n % 2, ret);
}

/**
 * print_b - a function that handle conversion specifiers
 *			of number d and i
 *
 * @ap: a list of argument pointing
 *		to the character to be printed
 * @ret: length of character printed
*/
void	print_b(va_list ap, int *ret)
{
	bin(va_arg(ap, unsigned int), ret);
}
