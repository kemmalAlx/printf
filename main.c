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

	len1  = _printf("");
	len2 = printf("");

	printf("len1: |%d|\n", len1);
	printf("len2: |%d|\n", len2);
	return (0);
}
