#include <stdio.h>
/**
 * main - prints the name of the executable
 * @argc: number of CLAs
 * @argv: array of stings of the CLAs
 * Return: returns 1
 */

int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	return (1);
}
