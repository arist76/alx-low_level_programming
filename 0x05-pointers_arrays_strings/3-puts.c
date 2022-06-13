#include "main.h"
#include <stdio.h>

/**
 * _puts - prints strings
 * @str: the string to be printed
 */

void _puts(char *str)
{
	int c;


	c = 0;
	while (*(str + c) != '\0')
	{
		putchar(*(str + c));
		c++;
	}
}
