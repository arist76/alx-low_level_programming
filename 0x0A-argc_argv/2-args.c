#include <stdio.h>
/**
 * main - prints all CLAs
 * @argc: size of argv
 * @argv: CMAs
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
