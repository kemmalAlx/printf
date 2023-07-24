#include "main.h"

/**
 * _putchar - function that write a character
 *
 * @c: the character will be printed
*/
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _putstr - a function that write a string
 *
 * @str: the string will be printed
 * @ret: length of character printed
*/
void _putstr(char *str, int *ret)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
		(*ret)++;
	}
}
