#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet letters in lowercase 10 times
 * Return: returns nothing
 */

void print_alphabet_x10(void)
{
	int a, z;

	for (z = 0; z <= 9; z++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
