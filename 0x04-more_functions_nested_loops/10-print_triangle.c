#include "main.h"
/**
 * print_traingle - function
 * Description: rint traingle
 * @size: size of the traingle
 * Return: void
 */
void print_triangle(int size)
{
	int r, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (space = size - r; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= r; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
