#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints all numbers from 0 to 9
 *
 *
 * Return: void
 */
void print_numbers(void)
{
	for (int n = 0; n <= 9; n++)
	{
		_putchar(n);
		_putchar('\n');
	}
}

