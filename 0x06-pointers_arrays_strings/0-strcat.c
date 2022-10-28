#include "main.h"
#include <stdio.h>

/**
* *_strcat - check the code and concatenates two strings
* @src: input
* @dest: input
*Return: always "0" success
*/

char *_strcat(char *dest, char *src)
{
	char s1[98] = "source";
	char s2[] = "destination\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
