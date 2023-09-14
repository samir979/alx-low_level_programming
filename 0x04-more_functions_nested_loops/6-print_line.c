#include "main.h"
/**
 * print_line - function
 * Description: print lines
 * @n: number of lines
 * Return: void
 */
void print_line(int n)
{
	int nline;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (nline = 1; nline <= n; nline++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
