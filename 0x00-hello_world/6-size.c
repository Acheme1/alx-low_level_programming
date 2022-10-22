#include <stdio.h>
/**
 * main - prints sizes of computers
 * Return: always 0 (success)
*/
int main(void)
{

	printf("%lu Size of a char: byte(s)\n", sizeof(char));
	printf("%lu Size of an int: byte(s)\n", sizeof(int));
	printf("%lu Size of a long int: byte(s)\n", sizeof(long));
	printf("%lu Size of a long long: byte(s)\n", sizeof(long long));
	printf("%lu Size of a float: byte(s)\n", sizeof(float));
	return (0);
}
