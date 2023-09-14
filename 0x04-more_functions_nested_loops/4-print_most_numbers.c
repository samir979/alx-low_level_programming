#include "main.h"
/**
 * print_most_numbers - function
 * Description: print numers from 0-9 exept 2 & 4
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n= '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			;
		else
			_putchar(n);
	}
	_putchar('\n');
}
