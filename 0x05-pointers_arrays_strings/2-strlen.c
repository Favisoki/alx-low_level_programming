#include "main.h"
#include <stdio.h>


/**
 *_strlen - return the length of a string
 *@s: string to find its length
 *
 * Return: length of a string
 */


int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}
