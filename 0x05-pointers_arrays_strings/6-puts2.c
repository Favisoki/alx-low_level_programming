#include "main.h"
#include <stdio.h>


/**
 *puts2 - prints every other character of a string
 *@str: string to use
 *
 * Return: nothing
 */


void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}

	_putchar('\n');
}
