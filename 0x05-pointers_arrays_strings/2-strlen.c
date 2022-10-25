#include "main.h"
#include <stdio.h>
/**
*_strlen - return the function of a lenght.
*
* @s: string pointer.
* Return: alway 0 success
*/

int _strlen(char *s)
{

	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
