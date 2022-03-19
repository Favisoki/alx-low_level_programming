#include "main.h"

/**
 * print_numbers - print all numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	for (char n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

