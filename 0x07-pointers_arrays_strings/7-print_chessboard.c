#include "main.h"
/**
 * print_chessboard - print chess board
 * @a: array of elements
 */
void print_chessboard(char (*a)[8])
{
	int r , col;

	for (r = 0; r < 8; r++)
	{
		for (col = 0; col < 8; col ++)
		{
			_putchar(a[r][col]);
		}
		_putchar('\n');
	}
}
