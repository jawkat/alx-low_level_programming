#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String to convert
 *
 * Return: Converted unsigned int, or 0 if an error occurs
 */

unsigned int binary_to_uint(const char *b)
{
	int pu = 1, len = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (len--; len >= 0; len--)
	{
		if (b[len] == '1' || b[len] == '0')
		{
			res = res + (b[len] - '0') * pu;
			pu = pu * 2;
		}
		else
		{
			return (0);
		}
	}

	return (res);
}
