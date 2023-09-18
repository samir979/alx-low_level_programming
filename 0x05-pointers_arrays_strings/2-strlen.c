#include "main.h"
/**
 * _strlen - count the length of tring
 * @s: string s
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s += 1;
	}
	return (len);
}
