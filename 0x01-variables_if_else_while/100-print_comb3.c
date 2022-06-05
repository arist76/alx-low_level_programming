#include <stdio.h>

/**
 * main - prints all possible combination of two numbers
 *
 * Return: returns zero
 */

int main(void)
{
	/* 0 - 48 and 9 - 57*/

	int end = 57;
	int start1;
	int start2;


	for (start1 = 48; start1 <= end; start1++)
	{
		for (start2 = start1 + 1; start2 <= end; start2++)
		{
			putchar(start1);
			putchar(start2);
			if (start1 == 56 && start2 == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
