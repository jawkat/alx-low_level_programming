
#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 *
 * @n: the number to be printed
 */


void print_binary(unsigned long int n)
{
	int i, bit;
	int flag = 0;
	int size = sizeof(int) * 8 - 1;

	for (i = size; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1 || flag == 1)
		{
			_putchar(bit + '0');
			flag = 1;
		}
	}
}

