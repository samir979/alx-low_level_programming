#include <stdio.h>

/**
 * main - print numbers
 * Return: 0 if exit probably
 */

int main(void)
{
        int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
