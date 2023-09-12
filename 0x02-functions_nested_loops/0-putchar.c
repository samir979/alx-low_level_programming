#include "putchar.h"
/**
 * main - print putchar
 *
 * Return: 0 if exit ok
 */

int main(void)
{
	char *h = "_putchar\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}

