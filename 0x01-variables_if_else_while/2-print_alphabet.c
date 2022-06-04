#include <stdio.h>

/**
 * main - prints all the lowercase characters
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
	putchar('\n');
	return (0);
}
