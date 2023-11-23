#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String to convert
 *
 * Return: Converted unsigned int, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			res = (res << 1) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (res);
}
