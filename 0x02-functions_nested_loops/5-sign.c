#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 *@n: number to check sign
 *
 * Return: 1 if n is > 0, 0 if n is 0, -1 if n is less than zero
*/
int print_sign(int n)
{
	if (n > '0')
	{
		putchar(n);
		return (1);
	}
	else if (n == '0')
	{
		putchar(n);
		return (0);
	}
	else
		return (-1);
}
