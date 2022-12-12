#include <stdio.h>

/**
 * main - returns all possible combinations of two digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; j < 100; j++)
	{
		for (j = i; j < 100; j++)
		{
			if (j != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i *100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
