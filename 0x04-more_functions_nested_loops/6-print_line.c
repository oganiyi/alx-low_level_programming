#include "main.h"

/**
 * print_line - print line on the screen
 * @n: number of times it prints the line
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_')
		}
		_putchar('\n');
	}
}
