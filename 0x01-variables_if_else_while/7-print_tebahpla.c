#include <stdio.h>

/**
 * main - prints lowercase letters in reverse
 *
 * Return: returns zero
 */

int main(void)
{
	int a;
	int b;

	b = 122;

	for (a = 97; a <= b; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
