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
	double d;
	float f;

	printf("%lu\n", sizeof(i));
	printf("%lu\n", sizeof(c));
	printf("%lu\n", sizeof(d));
	printf("%lu\n", sizeof(f));
	return (0);
}
