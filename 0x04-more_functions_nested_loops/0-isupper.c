#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if the char is uppercase
 * @c: character to checl
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
