#include <stdio.h>

/**
 * main - prints tow combinations of a two digit nuber
 *
 * Return: returns zero
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	int start;
	int end;

	start = 48;
	end = 57;

	for (a = start; a <= end; a++)
	{
		for (b = start; b < end; b++)
		{
			for (c = a; c <= end; c++)
			{
				for (d = b + 1; d <= end; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == end && b == end - 1 && c == end && d == end)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
