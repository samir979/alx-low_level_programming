#include "main.h"
/**
 * palind2 - get length of a
 * @a: string
 * @l: int length
 * Return: palind
 */
int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l +1));
}
/**
 * palind3 - compare string vs string rev
 * @a: string
 * @l: length
 * Return: plalind
 */
int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: palind
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
