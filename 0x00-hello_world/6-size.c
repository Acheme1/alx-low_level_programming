#include <stdio.h>
/**
 * main - prints sizes of computers
 * Return: always 0 (success)
 *
*/
int main(void)
{
	int i;
	char c;
	long int l;
	long long int d;
	float f;

	printf("%lu size of an int: byte(s)\n", sizeof(i));
	printf("%lu size of a char: byte(s)\n", sizeof(c));
	printf("%lu size of a long int byte(s)\n", sizeof(l));
	printf("%lu size of a long long byte(s)\n", sizeof(d));
	printf("%lu size of a float byte(s)\n", sizeof(f));
	return (0);
}
