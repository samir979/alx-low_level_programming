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
 * puts2 - print 1 char os 2 os string
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
