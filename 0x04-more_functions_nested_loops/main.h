#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * _isupper - checks if a character is uppercase
 * _isdigit - checks if a character is a digit
 * mul - multiplies two digits
 * print_numbers - print all numbers from 0 to 9
 * print_most_numbers - prints numbers 0 to 9 excpt 2/4
 * more_numbers - print 0-14, 10 times
 * print_line - draw straight line
 * print_diagonal - print diagonal line 
 * print_triangle - draw a triangle
 * print_square - draw a square 
 *
 *
 */

int _putchar(char);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_triangle(int size);
void print_square(int size);
