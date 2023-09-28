#include "main.h"
/**
 * sqrt2 - posible to evaluate from 1 - n
 * @a: same number as n
 * @b: iterates numer
 * Return: square
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - return the natural square
 * @n: integer number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
