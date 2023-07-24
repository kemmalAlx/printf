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
	len1 = printf("|%c|", '0');
	len2 = _printf("|%c|", '0');
	printf("|%d|\t|%d|\n", len1, len2);
	
	len1 = printf(" |%c| ", '0');
	len2 = _printf(" |%c| ", '0');
	printf("|%d|\t|%d|\n", len1, len2);


	len1 = printf(" |%c|", '0' - 256);
	len2 = _printf(" |%c|", '0' - 256);
	printf("|%d|\t|%d|\n", len1, len2);

	len1 = printf("|%c| ", '0' + 256);
	len2 = _printf("|%c| ", '0' + 256);
	printf("|%d|\t|%d|\n", len1, len2);

	len1 = printf(" |%c| |%c| |%c| ", '0', 0, '1');
	len2 = _printf(" |%c| |%c| |%c| ", '0', 0, '1');
	printf("|%d|\t|%d|\n", len1, len2);

	len1 = printf(" |%c| |%c| |%c| ", ' ', ' ', ' ');
	len2 = _printf(" |%c| |%c| |%c| ", ' ', ' ', ' ');
	printf("|%d|\t|%d|\n", len1, len2);

	len1 = printf(" |%c| |%c| |%c| ", '1', '2', '3');
	len2 = _printf(" |%c| |%c| |%c| ", '1', '2', '3');
	printf("|%d|\t|%d|\n", len1, len2);

	len1 = printf(" |%c| |%c| |%c| ", '2', '1', 0);
	len2 = _printf(" |%c| |%c| |%c| ", '2', '1', 0);
	printf("|%d|\t|%d|\n", len1, len2);

	len1 = printf(" |%c| |%c| |%c| ", 0, '1', '2');
	len2 = _printf(" |%c| |%c| |%c| ", 0, '1', '2');
	printf("|%d|\t|%d|\n", len1, len2);

	return (0);
}
