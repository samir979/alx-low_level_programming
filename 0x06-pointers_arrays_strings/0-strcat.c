#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: detination string
 */
char *_strcat(char *dest, char *src)
{
	char *final = dest;

	while (*final != '\0')
	{
		final++;
	}
	while (*src != '\0')
	{
		*final = *src;
		src++;
		final++;
	}
	*final = '\0';
	return (dest);
}
