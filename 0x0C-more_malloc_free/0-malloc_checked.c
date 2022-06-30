#include "main.h"
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);

	if (temp == NULL)
		exit(98);


	return (temp);
}
