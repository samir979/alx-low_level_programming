#include "main.h"
/**
 * print_sign - Returns 1 and prints + if n is greater than zero & 0 if zero & -1 if less than 0
 * Return: 1, -1, 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
