#include <stdio.h>
/**
 * main - print chars
 * Retutn: 0 if exit probably
 */
int main(void)
{
	char c;
	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}