#include "main.h"

/**
 * _abs - external function
 * @num: the number to be checked
 * Return: absolute
*/

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
