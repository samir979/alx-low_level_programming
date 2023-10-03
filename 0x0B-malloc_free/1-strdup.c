#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - get length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
        int x;

        for (x = 0; s[x] != '\0'; x++)
                ;
        return (x);
}
/**
 * *_strdup - return pointer to string
 * @str: string
 * Retrn: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[x] = str [x];
		x++;
	}
	return (ptr);
}
