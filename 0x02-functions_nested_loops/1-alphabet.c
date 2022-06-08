#include "_putchar.c"

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
