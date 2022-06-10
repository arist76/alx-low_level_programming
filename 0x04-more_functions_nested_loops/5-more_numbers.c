#include "main.h"

/**
 * more_numbers - prints numbers upto 14
 */

void more_numbers(void)
{
	int counter;
	int s;
	int d;
	int is_two;

	is_two = 0;

	for (counter = 1; counter <= 10; counter++)
	{
		for (s = 48; s <= 57; s++)
		{
			if (is_two != 0)
			{
				_putchar('1');
			}

			_putchar(s);

			if (s == 57)
			{
				s = 48;
				is_two = 1;
			}
			else if (s == 52 && is_two != 0)
			{
				break;
			}
		}
		_putchar('\n');
		is_two = 0;
	}
}
