#include "main.h"
/**
 * _isupper - check the letter
 *
 * Description: print the alphapet using _putchar
 * @c: chracter
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
