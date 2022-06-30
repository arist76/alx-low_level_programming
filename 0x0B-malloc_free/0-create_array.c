#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of size with value c
 * @size: the size of the array
 * @c: the initalization character of the array
 * Return: returns the pointer to the first value
 */

char *create_array(unsigned int size, char c)
{
	char *ars;
	unsigned int i;

	ars = (char *) malloc(sizeof(char) * size);

	if (size == 0 || ars == NULL)
	{
		return (NULL);
	}
	;

	for (i = 0; i <= size; i++)
	{
		ars[i] = c;
	}

	return (&ars[0]);
}
