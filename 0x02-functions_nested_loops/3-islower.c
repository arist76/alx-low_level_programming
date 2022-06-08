#include "main.h"

/**
 * _islower - checks if c is lower
 * @c: the character to be checked
 *
 * Return: returns 1 if lower and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
