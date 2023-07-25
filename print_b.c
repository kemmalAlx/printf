#include "main.h"
#include <stdio.h>

void bin(unsigned n, int *ret)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2, ret);
 
    /* step 2 */
	print_number(n % 2, ret);
}

void	print_b(va_list ap, int *ret)
{
	bin(va_arg(ap, unsigned int), ret);
}
