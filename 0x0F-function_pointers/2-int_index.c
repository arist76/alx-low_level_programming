#include "function_pointers.h"
#include <stdio.h>
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			return (i);
		}
	}

	return (-1);
}
