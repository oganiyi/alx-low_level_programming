#include "main.h"

/**
 * print_triangle - function to prints triangle
 * @size: size
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j != (size - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		}
	}
	_putchar('\n');
}
