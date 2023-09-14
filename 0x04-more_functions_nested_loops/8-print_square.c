#include "main.h"
/**
 * print_square - function
 * Description: print square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int r, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
