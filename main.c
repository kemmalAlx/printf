#include "main.h"
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

	len1 = printf("| NULL %d NULL |", 1337);
	len2 = _printf("| NULL %d NULL |", 1337);
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	return (0);
}
