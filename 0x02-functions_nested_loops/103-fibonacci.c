#include <stdio.h>
/**
 * main - print sum of the fibo numbers
 * Return: 0
 */
int main(void)
{
	long int f1 = 1, f2 = 2, sum = f2, tmp;

	while (f2 < 4000000)
	{
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		sum += (f2 % 2 == 0) ? f2 : 0;
	}
	printf("%li\n", sum);
	return (0);
}
