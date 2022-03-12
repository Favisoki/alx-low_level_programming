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


	for (c = 'z'; c >= 'a'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
