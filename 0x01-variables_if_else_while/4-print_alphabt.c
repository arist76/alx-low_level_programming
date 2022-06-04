#include <stdio.h>

/**
 * main - prints lowercase letters except e and q
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
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
