#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals of int square matrix 
 * @a: pointer to matrix
 * @size: size of square
 */
void print_diagsums(int *a, int size)
{
	int *point = a;
	int lsum = 0;
	int rsum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		lsum += point[i * size + i];
		rsum += point[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", lsum, rsum);
}
