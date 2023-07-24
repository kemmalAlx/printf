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

	len1 = printf("| %% |");
	len2 = _printf("| %% |");
	printf("\n|%d|\t|%d|\n\n", len1, len2);
	
	len1 = printf("| %%%% |");
	len2 = _printf("| %%%% |");
	printf("\n|%d|\t|%d|\n\n", len1, len2);


	len1 = printf("| %% %% %% |");
	len2 = _printf("| %% %% %% |");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %%  %%  %% |");
	len2 = _printf("| %%  %%  %% |");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("| %%   %%   %% |");
	len2 = _printf("| %%   %%   %% |");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("|%%|");
	len2 = _printf("|%%");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	len1 = printf("|%% %%|");
	len2 = _printf("|%% %%|");
	printf("\n|%d|\t|%d|\n\n", len1, len2);

	return (0);
}
