#include "main.h"

/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int leng = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		leng++;

	concat = malloc(sizeof(char) * (leng + 1));

	if (concat == NULL)
		return (NULL);

	leng = 0;

	for (index = 0; s1[index]; index++)
		concat[leng++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[leng++] = s2[index];

	concat[leng] = '\0';

	return (concat);
}
