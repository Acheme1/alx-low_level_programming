#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integer
 * @a: 1st argument to be swap
 * @b: 2nd argument to be swap
 *
 * Return : always 0 success
 *
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;

}
