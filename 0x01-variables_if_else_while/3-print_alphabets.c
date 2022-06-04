#include <stdio.h>

/**
 * main - prints alphabet in uppercase and lowercase
 *
 * Return: returns zero
 */

int main(void)
{
	int a;
	int b;

	b = 122;

	for (a = 97; a <= b; a++)
	{
		putchar(a);
	}

	b = 90;

	for (a = 65; a <= b; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
