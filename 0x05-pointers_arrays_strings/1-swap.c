#include "main.h"
#include <stdio.h>


/**
 *swap - swap the values of two integers
 *@a: first integer
 *@b: second integer
 *
 * Return: nothing
 */


void swap(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
