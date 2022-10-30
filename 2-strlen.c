#include "main.h"
#include <stdio.h>
/**
* _strlen - returns the length of the string
*@s: string pointer to the string whose lenght is to be found
*
* Return: always 0 success
*/
int _strlen(char *s)
{

	int i = 0;

	for (*(s + i) != 0)
	{
		i++
	}

	return (i);
}
