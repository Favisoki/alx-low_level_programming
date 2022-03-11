#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero on success
 *
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long int);
	int longlongSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a character: %d byte(s)\n", charSize);
	printf("Size of an int: %d byte(s)\n", intSize);
	printf("Size of a long: %d byte(s)\n", longSize);
	printf("Size of a long long int: %d byte(s)\n", longlongSize);
	printf("Size of a float: %d byte(s)\n", floatSize);
	return (0);
}
