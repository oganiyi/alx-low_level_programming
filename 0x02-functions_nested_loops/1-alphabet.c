#include "main.h"

/**
 * print_alphabet - external function
 * Description: the function prints the lowercase alphabets
 * Return: void
*/

void print_alphabet(void)
{
	int alph;

	for (alph = "a"; alph <= "z"; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
