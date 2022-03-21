#include "main.h"
#include <stdio.h>


/**
 *_puts - prints a string to stdout
 *@str: string to print
 *
 * Return: nothing
 */


int _puts(char *str)
{
	return (write(str));
}
