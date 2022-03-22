#include "main.h"
#include <stdio.h>


/**
 *rev_string - reverses a string
 *@s: string to reverse
 *
 * Return: nothing
 */


void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
