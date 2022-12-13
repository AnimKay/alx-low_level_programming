#include "main.h"

/**
 * _islower - entry point
 * @c : int value to be compared wit ASCII value
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
