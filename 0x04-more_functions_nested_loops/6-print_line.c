#include "main.h"

/**
 * print_line - Print a straight line
 * @n: is the number of times the _ character should be printed
 */

void print_line(int n)

{
	int lnChr;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			putchar('_');
		putchar('\n');
	}
}
