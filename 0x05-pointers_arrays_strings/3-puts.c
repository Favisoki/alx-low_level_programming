#include "main.h"
#include <stdio.h>


/**
 *_puts - prints string
 *@str: string to print
 *
 * Return: nothing
 */


int _puts(char *str)
{
	return (write(str));
}
