#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a string to be counted
 *
 * Return: returns the count of *s
 */

int _strlen(char *s)
{
	int c;

	c = 0;
	while (*(s + c) != 0)
	{
		c++;
	}

	return (c);
}
