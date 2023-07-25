#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

typedef struct s_printf
{
	char symbol;
	void (*print_symb)(va_list ap, int *ret);
}	t_printf;

void _putchar(char c, int *ret);
void _putstr(char *str, int *ret);
void print_c(va_list ap, int *ret);
void print_s(va_list ap, int *ret);
void print_d(va_list ap, int *ret);

int _printf(const char *format, ...);

#endif
