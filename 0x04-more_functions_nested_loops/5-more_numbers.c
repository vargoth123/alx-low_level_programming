#include "main.h"

/**
 * more_numbers - Print 0 - 14 ten times and you
 * can only use _putchar three times
 * Return: Always 0
 */

void more_numbers(void)

{
	int i, j, k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			i = k;
			if (k > 9)
			{
				putchar(1 + 48);
				i = k % 10;
			}
			putchar(i + 48);
		}
		putchar('\n');
	}
}
