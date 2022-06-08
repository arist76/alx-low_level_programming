#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: does not have any return statement
 */

void print_alphabet(void)
{
	int a;


	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}

/**
 * main - executes print_alphabet
 * Return: returns 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
