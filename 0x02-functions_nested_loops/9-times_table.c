#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 *Return: void
 *
 */

void times_table(void)
{
	int x, y, prod;

	for (y = 0; y <= 9; y++)
	{
		for (x =0; x <= 9; x++)
		{
			prod = y * x;
			if (x! = 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < 10) &&(x != 0))
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			else
				_putchar((prod % 10) + '0');
		m = 9;
		n = n * m;
		return (n);
	}
}
