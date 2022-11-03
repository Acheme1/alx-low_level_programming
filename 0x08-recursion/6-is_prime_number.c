#include "main.h"
w
int is_prime(unsigned int n, unsigned int c)
 11 {
 12         if (n % c == 0)
 13         {
 14         if (n == c)
 15         return (1);
 16         else
 17         return (0);
 18         }
 19         return (0 + is_prime(n, c + 1));
 20 }

/**
* is_prime_number - detects if number is a prime number or not
* @n: input
* @c: iteration
*Return: 1
*/
int is_prime_number(int n)
{
	if (n == 0)
	return (0);
	if (n < 0)
	return (0);
	if (n == 1)
	return (1);
}
