#include "main.h"
/**
 * flip_bits - Number of bits needed to flip to get from one number to another.
 *
 * @n: long int
 *
 * @m: unsigned int
 *
 * Return: 1 if it works, or  -1 if there is an error
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, index_at_number;

	index_at_number = n ^ m;

	while (index_at_number > 0)
	{
		if (index_at_number & 1)
		{
			i++;
		}
		index_at_number >>= 1;
	}
	return (i);
}

