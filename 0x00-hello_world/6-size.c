#include <stdio.h>
/**
 * main - prints sizes of computers
 * Return: always 0 (success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("%lu Size of a char: byte(s)\n", (unsigned long) sizeof(a));
	printf("%lu Size of an int: byte(s)\n", (unsigned long) sizeof(b));
	printf("%lu Size of a long int: byte(s)\n", (unsigned long) sizeof(c));
	printf("%lu Size of a long long: byte(s)\n", (unsigned long) sizeof(d));
	printf("%lu Size of a float: byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
