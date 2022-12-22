#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: constant
 * @n: parameter
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
