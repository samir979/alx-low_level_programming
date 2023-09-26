#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: the target string
 * @*needle: the substring
 * Return: pointer of starting substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystackptr = haystack;

	while (*haystackptr != '\0')
	{
		char *needleptr = needle;

		while (*needleptr != '\0' && *haystackptr == *needleptr)
		{
			haystackptr++;
			needleptr++;
		}
		if (*needleptr == '\0')
		{
			return (haystackptr - (needleptr - needle));
		}
		haystackptr++;
	}
	return (NULL);
}
