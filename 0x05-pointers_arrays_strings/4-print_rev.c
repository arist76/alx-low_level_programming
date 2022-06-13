#include "2-strlen.c"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int len;


	for (len = _strlen(s); len >= 0; len--)
	{
		putchar(*(s + len));
	}
}
