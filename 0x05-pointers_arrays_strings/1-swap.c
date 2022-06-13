#include "main.h"

/**
 * swap_int - swaps *a with *b
 * @a: pointer to be swaped
 * @b: pointer to be swaped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
