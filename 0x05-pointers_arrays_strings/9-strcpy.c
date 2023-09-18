#include "main.h"
/**
 * *_strcpy - copy strung pointed by src,
 * @dest: copy strig
 * @src: string will be copy
 * Return: pointer copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *point = dest;

	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (point);
}
