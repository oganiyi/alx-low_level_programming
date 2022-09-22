#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 * @n: the maximum number of bytes to append from src
 *
 * Description: This function appends the string pointed to by src to the
 * string pointed to by dest, overwriting the null byte at the end of dest,
 * and then adding a terminating null byte, using most n bytes from src.
 *
 * Return: a pointer to the destination string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	return (dest);

}
