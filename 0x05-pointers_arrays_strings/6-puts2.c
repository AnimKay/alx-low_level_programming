#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a string followed by a new line to stdout
 * @str: parameter
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
