#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: array pointer
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
			printf("%d", a[index]);
		else
		{
			printf("%d", a[index]);
			printf(", ");
		}
	}
	printf("\n");
}
