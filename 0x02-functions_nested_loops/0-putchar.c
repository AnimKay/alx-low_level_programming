#include <stdio.h>

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
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
