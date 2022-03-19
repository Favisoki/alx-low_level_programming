#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - print diagonal line
 *@n: length of line
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int x, y;

	for (y = 0; y <= n; y++)
	{
		for (x = 1; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

