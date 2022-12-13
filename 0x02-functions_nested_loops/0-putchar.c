#include "main.h"

/**
 * main - prints _putcar followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
