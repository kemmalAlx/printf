#include "../main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1 = 0, len2 = 0;

	len1 = printf("|\t\b%d\t%c\t%s|\n",1337, 'X', "1337");
	len2 = _printf("|\t\b%d\t%c\t%s|\n",1337, 'X', "1337");
	printf("|%d|\t|%d|\n\n", len1, len2);

	return (0);
}
