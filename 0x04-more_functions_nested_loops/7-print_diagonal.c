#include "main.h"
/**
 * print_diagonal - function
 * Description: print diagonal
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int r, numline;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			if (r > 1)
			{
				for (numline = 1; numline <= r-1; numline++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
