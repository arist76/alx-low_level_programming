#include <stdarg.h>

/**
 * sum_them_all - adds up integers
 * @n: number of integers given
 *
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
