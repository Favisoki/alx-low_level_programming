#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *@c: character to check if lowercase or not
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
