#include <stdio.h>
/**
 * main - print fuzzy
 * Description: print fuzzy buzzy
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fuzz");
		else
			printf("%i", n);

		if (n < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
