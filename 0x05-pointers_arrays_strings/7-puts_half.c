#include "main.h"
/**
 * _strlen - count string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * puts_half - print the second half of string
 * @str: string
 */
void puts_half(char *str)
{
	int len, i, half;

	len = _strlen(str);
	half = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;

	for (i = half; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
