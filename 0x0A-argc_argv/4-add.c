#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - finds the sum
 * @argc: size of argv
 * @argv: CLAs
 * Return: returns 0 if there CMA error and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int x, y, sum;


	if (argc == 1)
	{
		putchar('0');
	}
	else
	{
		sum = 0;
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					puts("Error");
					return (1);
				}
				sum += atoi(argv[x]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
