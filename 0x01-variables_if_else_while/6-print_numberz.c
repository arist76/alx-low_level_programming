#include <stdio.h>

/**
 * main - prints all the decimal numbers
 *
 * Return: returns zero
 */

int main(void)
{
	int a;
	int b;

	b = 57;

	for (a = 48; a <= b; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
