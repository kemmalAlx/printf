#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

void _putchar(char c);
void _putstr(char *str, int *ret);
void print_c(va_list ap);
void print_s(va_list ap, int *ret);

int _printf(const char *format, ...);

#endif