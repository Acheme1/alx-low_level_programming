#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string, follow by a new line.
*
* @str: string
*
*Return: always 0 success
*
*/

void _puts(char *str)

{
	while (*str != '\0')

	{
		putchar(*str++);
	}
	putchar('\n');

}
