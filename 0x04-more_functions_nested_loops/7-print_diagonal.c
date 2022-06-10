#include "main.h"

/**
 * print_diagonal - prints n lines of \ diagonally
 * @n: number of lines of the diagonal
 */

void print_diagonal(int n)
{
	int counter;
	int space;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			for (space = 1; space <= counter; space++)
			{
				if (space < 2)
				{
					continue;
				}
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
