#include "main.h"

/**
 * main - prints putchar
 *
 * Return: returns 0
 */


int main(void)
{
	int i;
	char x[8] = {95, 112, 117, 116, 99, 104, 97, 114};


	for (i = 0; i <= 7; i++)
	{
		_putchar(x[i]);
	}

	_putchar('\n');
	return (0);
}
