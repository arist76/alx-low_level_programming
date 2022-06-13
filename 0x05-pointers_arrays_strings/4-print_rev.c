#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int len;


	for (len = _strlen(s); len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
