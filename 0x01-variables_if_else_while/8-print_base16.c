#include <stdio.h>

/** 
 * main - print 16 base alphabet
 * Return: 0 if exit probably
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 16 ; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar(87 + n);
		}
	}
	putchar('\n');
	return (0);
}
