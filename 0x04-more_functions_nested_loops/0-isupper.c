#include <stdio.h>

/**
 *_isupper - checks if a character is uppercase
 *@c: the character
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

