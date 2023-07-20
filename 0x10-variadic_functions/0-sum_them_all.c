#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that sum of all its parameters
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to calculate the sum of.
 * Return: if n == 0 - 0 . otherwise - return the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);

	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
