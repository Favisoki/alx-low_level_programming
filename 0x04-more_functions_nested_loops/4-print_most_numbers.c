#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - prints all numbers from 0 to 9 except 2 and 4
 *
 *
 * Return: void
 */
void print_most_numbers(void)
{
	for (char n = '0'; n <= '9'; n++)
	{
		if n == '2' || n == '4'
			continue;
		_putchar(n);
	}
	_putchar('\n');
}

