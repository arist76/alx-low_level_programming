#include "main.h"

/**
 * _isupper - returns one if c is uppercase and zero otherwise
 * @c: the character to be cheked
 * Return: returns one or zero
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
