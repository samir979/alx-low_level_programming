#include "main.h"
/**
 * swap_int - swap the value of two int
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
