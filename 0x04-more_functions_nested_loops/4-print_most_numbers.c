#include "main.h"

/**
 * print_most_numbers - prints decimals except 2 and 4
 *
 * Return: returns nothing
 */


void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
}
