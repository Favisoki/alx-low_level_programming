#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 *@n: number to start print from
 *
 * Return: void
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
}
