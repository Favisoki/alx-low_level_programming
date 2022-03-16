#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is lowercase
 *@c: character to check
 *
 * Return: 1 if lowercase, 0 if otherwise
 *
*/
int _islower(int c)
{
	if (c >= 97 && c<= 122)
	
		return (1);
	else
		return (0);
}
