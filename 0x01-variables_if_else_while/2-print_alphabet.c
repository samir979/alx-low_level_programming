#include <stdio.h>
/**
 * main - print chars
 * Return: 0 if exit probably 0 Sucess
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
