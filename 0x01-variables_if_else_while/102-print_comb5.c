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
				for (d = b + 1; d <= end + 1; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					if (d == end + 1)
					{
						putchar(c + 1);
						putchar(0);
					}
					else
					{
						putchar(c);
						putchar(d);
					}
					if (a == end && b == end - 1 && c == end && d == 0)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
