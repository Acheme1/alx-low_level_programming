#include "main.h"

/**
 *_islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase, and 0 otherwise
 */
int _islower(void)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
