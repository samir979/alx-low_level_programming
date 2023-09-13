#include "main.h"
/**
 * times_table - print time table
 */
void times_table(void)
{
	int n, m, pro;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (m == 0)
			{
				_putchar(48);
				continue;
			}
			pro = n * m;
			_putchar(',');
			_putchar(' ');
			if (pro >= 10)
			{
				_putchar(pro / 10 + 48);
				_putchar(pro % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(pro + 48);
			}
		}
		_putchar('\n');
	}
}
