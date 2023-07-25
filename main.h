#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct print - A new struct type defining our print
 *
 * @symbol: Our symbol representing the data type
 * @print_func: a function pointer that prints
 *             a data type according to the symbol
*/
typedef struct print
{
	char symbol;
	void (*print_func)(va_list arg);
} func_printer;

void _putchar(char c, int *ret);
void _putstr(char *str, int *ret);
void print_c(va_list ap, int *ret);
void print_s(va_list ap, int *ret);
void print_d(va_list ap, int *ret);
void print_number(int n, int *ret);
void	print_b(va_list ap, int *ret);

int _printf(const char *format, ...);

#endif
