#include "main.h"
/**
 * print_number - print integer number
 * @n:number
 * Return: 0
 */
void print_number(int n)
{
	int i, j, digi, digits, p;
	unsigned int temp, nchar, num;

	digi = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	num = temp;

	while (num >= 10)
	{
		num = num / 10;
		digi++;
	}
	digits = digi + 1;
	p = 1;
	i = 1;

	while (i < digits)
	{
		p = p *10;
		i++;
	}
	j = p;
	while (j >= 1)
	{
		nchar = (temp / j) % 10;
		_putchar(nchar + '0');
		j = j / 10;
	}
}

