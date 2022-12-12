#include <stdio.h>
#include <stdlib.h>

/**
 * main - return all single integer from zero to ten
 * Return:  Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d",num);
		num++;
	}
	putchar('\n');

	return (0);
}
