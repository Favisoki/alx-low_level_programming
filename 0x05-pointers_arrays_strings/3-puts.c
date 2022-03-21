#include "main.h"
#include <stdio.h>


/**
 *_puts - prints string
 *@str: string to print
 *
 * Return: nothing
 */


void _puts(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
