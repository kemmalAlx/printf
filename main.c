#include "main.h"
#include <stdio.h>
#include <limits.h>


int main()
{
	int len1 = 0, len2 = 0;

	len1  = _printf("|%%%c|\n", 'A'); // %A
	len2 = printf("|%%%c|\n", 'A');	// %A

	printf("len1: |%d|\n", len1);
	printf("len2: |%d|\n", len2);
	return 0;
}