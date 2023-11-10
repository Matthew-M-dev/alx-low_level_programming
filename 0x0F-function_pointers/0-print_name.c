#include "function_pointers.h"
/**
 * print_name - main entry
 * @name: input
 * @f: entry
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
