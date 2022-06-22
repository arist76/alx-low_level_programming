#include "main.h"

/*
 * print_sign - checks for integer sign
 * @n: the number to be checked
 * 
 * Return: returns 1,0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	elif (n == 0)
	{
		return (0);
	}
	elif (n < 0)
	{
		return (-1);
	}
}
