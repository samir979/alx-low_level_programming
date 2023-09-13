#include "main.h"
/** 
 * sumr - returns the sum of numbers
 * @st: first number
 * @last: last number
 * @step: numer of steps
 * Return: sum
 */
int sumr(int st, int last, int step)
{
	int sum = 0, i;

	for (i = st; i < last; i += step)
	{
		sum += i;
	}
	return (sum);
}
/**
 * main - prints the sum of all numbers
 * Return: 0
 */
int main(void)
{
	int total;

	total = sumr(3, 1024, 3) + sumr(5, 1024, 5);
	_putchar(total);
	_putchar('\n');
	return (0);
}
