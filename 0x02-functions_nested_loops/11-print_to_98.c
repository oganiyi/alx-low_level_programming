#include "main.h"

/**
 * print_to_98 - function to print down to 98
 * @n: num to check
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
		{
			n--;
		}
		if (n < 98)
		{
			n++;
		}
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
