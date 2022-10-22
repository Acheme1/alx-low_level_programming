#include <stdio.h>
/**
 * main - prints sizes of computers
 * Return: always 0 (success)
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("%lu Size of a char: 1 byte(s)\n", sizeof(c));
	printf("%lu Size of an int: 4 byte(s)\n", sizeof(i));
	printf("%lu Size of a long int: 8 byte(s)\n", sizeof(l));
	printf("%lu Size of a long long: 8 byte(s)\n", sizeof(d));
	printf("%lu Size of a float: 4 byte(s)\n", sizeof(f));
	return (0);
}
