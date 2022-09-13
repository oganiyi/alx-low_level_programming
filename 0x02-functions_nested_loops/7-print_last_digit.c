#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @num: number to be checked
 * Return: return the last digit
*/

int print_last_digit(int num)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;
	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
