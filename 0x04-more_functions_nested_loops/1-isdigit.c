#include "main.h"

/**
 * _isdigit - function to check for digit
 * @c: int to check
 * Description: check for digit
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
