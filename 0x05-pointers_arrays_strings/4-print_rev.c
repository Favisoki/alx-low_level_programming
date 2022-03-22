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

	while (s[l] != '\0')
		l++;

	for (i = i - 1; i >= 0 i--)
		_putchar(s[i]);

	_putchar('\n');
}
