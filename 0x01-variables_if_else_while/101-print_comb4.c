#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
