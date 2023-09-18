#include "main.h"
/**
 * _strlen - count the length of string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}
/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int size = _strlen(s);

	while (size--)
		_putchar(*(s + size));
	_putchar('\n');
}
