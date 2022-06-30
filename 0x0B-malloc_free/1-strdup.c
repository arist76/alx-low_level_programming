#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copies a string
 * @str: the string to be copied
 * Return: the string to be copied
 */
char *_strdup(char *str)
{
	char *cpy;
	int size, i;

	/* find the size of str */
	size = 0;
	if (str == NULL)
		return (NULL);

	while (str[size - 1] != '\0')
	{
		size++;
	}

	/* allocate memory */
	cpy = (char *) malloc(size);
	if (cpy == NULL)
	{
		return (NULL);
	}


	/* copy str */
	for (i = 0; i <= size; i++)
	{
		*(cpy + i) = str[i];
	}

	return (cpy);
}
