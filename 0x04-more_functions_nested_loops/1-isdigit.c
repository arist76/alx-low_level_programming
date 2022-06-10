#include "main.h"

/**
 * _isdigit - checks if c is a number
 * @c: the input to be checked
 *
 * Return: returns 1 if c is a number and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
