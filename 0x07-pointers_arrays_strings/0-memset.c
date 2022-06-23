#include "main.h"
/**
 * _memset - populates a memory space
 * @s: the string to be populate
 * @b: the character to populate by
 * @n: the amount of space to populate
 * Return: returns the populated string's address
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	while (count < n)
	{
		*(s + count) = b;
		count++;
	}

	return (s);
}
