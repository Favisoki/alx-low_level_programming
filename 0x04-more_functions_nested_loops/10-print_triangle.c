#include "main.h"
#include <stdio.h>

/**
 *print_triangle - draw triagle
 *@size: dimensions of triangle
 *
 * Return: nothing
 */


void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (j = size - 1; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}

