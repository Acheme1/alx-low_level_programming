#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: amaount of arguments.
* Return: sum of its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list count;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	return (0);

/* variadic_function */
	va_start(count, n);

	for (i = 0; i < n; i++)
	sum += va_arg(count, int);

	va_end(count);

	return(sum);
}
