#include "main.h"
/**
 * _strlen - count length of strength
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
 * rev_string - reverse string
 * @s: string
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int counter = 0;
	char tmp;

	while (counter < len / 2)
	{
		tmp = *(s + counter);
		*(s + counter) = *(s + len - 1 - counter);
		*(s + len - 1 - counter) = tmp;
		counter++;
	}
}
