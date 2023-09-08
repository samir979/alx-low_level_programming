#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random numbers check the last one
 * Return: 0 if exit probably
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 != 0 && n % 10 < 6)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n, n%10);
	return (0);
}
