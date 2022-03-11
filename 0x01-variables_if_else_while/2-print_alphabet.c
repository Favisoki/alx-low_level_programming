#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: zero
 *
 */

int main(void)
{
	char c;


	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar("%d\n", c);
	}

	return (0);
}
