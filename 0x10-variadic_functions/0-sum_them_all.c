#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - entry point
 * @n: input
 * Return: Always 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
