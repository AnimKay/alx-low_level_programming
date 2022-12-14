#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 3 or 5 multiples
 *
 * Return: 0
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
