#include "main.h"
/**
 * print_last_digit - print last digit
 * Return: last digit
 */
int  print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last + 48);
	return (last);
}
