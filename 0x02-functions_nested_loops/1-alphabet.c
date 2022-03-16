#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints a to z
 *
 * Return: 0 for success
 *
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
