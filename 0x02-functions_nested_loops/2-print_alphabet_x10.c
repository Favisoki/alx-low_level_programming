#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints a to z 10 times
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int n = 0;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
}
