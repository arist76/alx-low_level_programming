#include <stdio.h>

/**
 * main - prints all hexa decimal numbers
 *
 * Return: returns zero
 */

int main(void)
{
	int a;
	int b;
	int num_a;
	int num_b;

	b = 102;
	num_b = 57;

	for (num_a = 48; num_a <= num_b; num_a++)
	{
		putchar(num_a);
	}

	for (a = 97; a <= b; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
