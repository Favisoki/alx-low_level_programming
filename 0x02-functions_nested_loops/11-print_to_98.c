#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 *@n: number to start print from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		out = n;
		while (out >= n && out <= 98)
		{
			printf("%s", out);
			out++
		}
	}
	else if (n > 98)
	{
		out = n;
		while (out <= n && >= 98)
		{
			printf("%s", out);
			out--
		}
	}
	else
		printf("%s", n)
}
