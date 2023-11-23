#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String to convert
 *
 * Return: Converted unsigned int, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	int i, pu = 1, len = 0;
	unsigned int res = 0;

	while (b[len])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
	if (b[i] == '1' || b[i] == '0')
		{
			res = res + (b[i] - '0') * pu;
			pu = pu * 2;
		}
		else
		{
			return (0);
		}
	}

	return (res);
}
