#include "main.h"

/**
 * times_table - external function to print times table
 * Return: void
*/

void times_table(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			product = j * k;

			if (k == 0)
			{
				_putchar(product + '0');
			}
			if (k != 0 && product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
