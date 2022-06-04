#include <stdio.h>

/**
 * main - prints numbers in ascending order
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
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
			continue;
		}
		putchar('\n');
	}
	return (0);
}
