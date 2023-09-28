#include "main.h"
/**
 * prime2 - make possible to evaluate 1 to n
 * @a: same number of n
 * @b: iterate number
 * Return: prime
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - check if a number is prime
 * @n: integer number
 * Return: prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
