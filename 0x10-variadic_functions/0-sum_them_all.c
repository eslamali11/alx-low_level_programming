#include "variadic_functions.h"

/**
 * sum_them_all - retrun sum of all args
 *
 * @n: num of args
 *
 * Return: 0 if @n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int s;
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		s += va_arg(args, int);


	va_end(args);
	return (s);
}
