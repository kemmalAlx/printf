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
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	int len1 = 0, len2 = 0;

	len1 = printf("|%s|", "");
	len2 = _printf("|%s|", "");
	printf("\n|%d|\t|%d|\n\n", len1, len2);
	
	len1 = printf("| %s|", "");
	len2 = _printf("| %s|", "");
	printf("\n|%d|\t|%d|\n\n", len1, len2);


	len1 = printf("|%s |", "");
	len2 = _printf("|%s |", "");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %s |", "");
	len2 = _printf("| %s |", "");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %s |", "-");
	len2 = _printf("| %s |", "-");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %s %s |", "", "-");
	len2 = _printf("| %s %s |", "", "-");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %s %s |", " - ", "");
	len2 = _printf("| %s %s |", " - ", "");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %s %s %s %s %s|", " - ", "", "4", "", s2);
	len2 = _printf("| %s %s %s %s %s|", " - ", "", "4", "", s2);
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %s %s %s %s %s |", " - ", "", "4", "", "2 ");
	len2 = _printf("| %s %s %s %s %s |", " - ", "", "4", "", "2 ");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	// len1 = printf(" NULL %s NULL ", NULL);
	// len2 = _printf(" NULL %s NULL ", NULL);
	// printf("\n|%d|\t|%d|\n\n", len1, len2);

	return (0);
}
