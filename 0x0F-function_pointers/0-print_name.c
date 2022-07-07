#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the name of to be printed
 * @f: call back that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
