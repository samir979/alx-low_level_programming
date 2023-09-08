#include <stdio.h>

/**
 * main - print three digits
 * Return: 0 if exit prbably
 */

int main(void)
{
	int n;
	int m;
	int l;

	for (l = 0 ; l != 8 ; l++)
	{
		for (n = l + 1 ; n != 9 ; n++)
		{
			m = n + 1;
			do {
				putchar('0' + l);
				putchar('0' + n);
				putchar('0' + m);
				if (l != 7)
				{
					putchar(',');
					putchar(32);
				}
				m++;
			} while (4m != 10);
		}
	}
	putchar('\n');
	return (0);
}
