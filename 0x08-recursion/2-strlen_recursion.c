#include "main.h"

int counter;

counter = 0;

int _strlen_recursion(char *s)
{
	if (*(s + counter) != '\0')
	{
		counter++;
	}
	else
	{
		return counter;
	}
}
