#include "main.h"

int main(void)
{
	char x[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		_putchar(x[i]);
	}

	_putchar('\n');
	return (0);
}
