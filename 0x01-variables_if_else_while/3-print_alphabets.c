#include <stdio.h>
/**
 * main - print small and capital letters
 * Return: 0 if exit probably
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}


