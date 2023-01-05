#include "main.h"
#define NULL 0

/**
 * _strchr - locate occurence of char in string and returns pointer
 * @s: string to search
 * @c: character
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
