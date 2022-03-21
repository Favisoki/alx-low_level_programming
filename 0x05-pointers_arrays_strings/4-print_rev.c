#include "main.h"
#include <stdio.h>


/**
 *print_rev - prints string in reverse
 *@s: string to print in reverse
 *
 * Return: nothing
 */


void print_rev(char *s)
{
	int l = _strlen(s);

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
