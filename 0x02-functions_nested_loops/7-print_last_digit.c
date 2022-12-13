#include "main.h"

/**
 * print_last_digit - entry point
 *
 * @n : number
 * Return: Value of the last digits
 *
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
