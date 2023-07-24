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

	len1  = _printf("|%%%c|\n", 'A');
	len2 = printf("|%%%c|\n", 'A');

	printf("len1: |%d|\n", len1);
	printf("len2: |%d|\n", len2);
	return (0);
}
