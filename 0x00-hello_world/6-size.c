#include <stdio.h>
/**
 * Main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{

	printf("size of a char: %lu 1 byte(s)\n", sizeof(char));
	printf("size of an int: %lu 4 byte(s)\n", sizeof(int));
	printf("size of long: %lu 4 byte(s)\n", sizeof(long int));
	printf("size of long long %lu 8 byte(s)\n", sizeof(long long int));
	printf("size of float %lu 4 byte(s)\n", sizeof(float));
	return (0);
}
