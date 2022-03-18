#include "main.h"

/**
 *_isdigit - checks if a character is a digit
 *@c: the character to check
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

