#include "main.h"

/**
 * print_line - prints "_" n times
 * @n: the number of times "_" is printed
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		putchar('_');
	}
	putchar('\n');
}
