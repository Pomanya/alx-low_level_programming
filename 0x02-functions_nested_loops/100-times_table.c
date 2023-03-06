#include "main.h"

/**
 *print_times_table - prints the times table of th einput
 *
 * @n: the value of the times table to be printed
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= 15; i++)
	{
	for (j = 0; j <= 15; j++)
	{
		prod = i * j;
		if (j == 0)
		{
			_putchar('0');
		}
		else if (prod < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(prod + '0');
		}
		else if (prod < 100)
		{
			_putchar(' ');
			_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');
		}
		else
		{
			_putchar(prod / 100 + '0');
			_putchar((prod / 10) % 10 + '0');
			_putchar(prod % 10 + '0');
		}
		_putchar('\n');
	}
	}
	}
}
