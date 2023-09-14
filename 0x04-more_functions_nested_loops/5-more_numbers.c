#include "main.h"
/**
 * more_numbers - function
 *
 * Description: print numbers from 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int n, i, ten, unit;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			ten = n / 10;
			unit = n % 10;
			if (n > 9)
				_putchar(ten + '0');
			_putchar(unit + '0');
		}
		_putchar('\n');
	}
}
