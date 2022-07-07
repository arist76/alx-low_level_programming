#include "function_pointers.h"

/**
 * array_iterator - runs function on each element of array
 * @array: the array to be looped
 * @size: the size of an array
 * @action: the action done on the element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
