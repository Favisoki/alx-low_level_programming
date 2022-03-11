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
		if (c == 'q' || c == 'e')
		{
			/*Do nothing*/
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
