#include "main.h"

/**
 * more_numbers - print numbers in multiple of 10 from 0 to 14
 *
 * Return: void
 */i

void more_numbers(void)
{
	int x, y;

	for (x = 1; x < = 10; i++)

	for (y = 0; y < = 14 y++)
	{
		{
			if (y >= 10)
				_putchar ('1');
			_putchar (y % 10 + '0');
		}
		_putchar('\n');
	}
}

