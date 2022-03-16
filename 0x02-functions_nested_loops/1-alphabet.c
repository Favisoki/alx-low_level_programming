#include "main.h"
#include <stdio.h>

/**
 * main - Prints a to z
 *
 * Return: 0 for success
 *
*/
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		_putchar("\n");

	}

	return (0);
}
