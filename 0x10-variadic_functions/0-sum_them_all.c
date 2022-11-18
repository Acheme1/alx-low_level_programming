#include <stdio.h>
#include <stdarg.h>

/**
* main - check the code,
* sum_them_all - returns the sum of its parameters.
* @n: amaount of arguments.
* Return: sum of its parameters
*/

int sum_them_all(const unsigned int n, ...);

int main(void)
{
	printf(" %d\n", sum_them_all(2, 45, 52));
	return (0);
}

int sum_them_all(const unsigned int n, ...)
{
va_list count;
int i, sum;

va_start(count, n);
sum = 0;

for (i = 0; i < n; i++)
sum += va_arg(count, int);
va_end(count);
return (sum);
}
