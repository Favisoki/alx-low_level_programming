#include <time.h>
#include <stdio.h>


/**
 * main - prints 00 - 99
 *
 * Return: 0 for success
 *
 */

int main(void)
{
	int n, o;

	for (n = '0'; n <= '9'; n++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			if ((n < o) & (o <= '9'))
			{
				putchar(n);
				putchar(o);
				if ((o < '9') | (n < '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
