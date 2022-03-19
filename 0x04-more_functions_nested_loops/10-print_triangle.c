#include "main.h"
#include <stdio.h>

/**
 *print_triangle - draw a triangle
 *@size: dimensions of triangle
 *
 * Return: nothing
 */


void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = size - 1; y > 0; y--)
			_putchar(' ');
		for (y = i; y > 0; y--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}

