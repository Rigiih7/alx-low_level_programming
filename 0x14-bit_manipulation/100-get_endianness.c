#include "main.h"
/**
 * get_endianness - Checks the endianess
 *
 * Return: appropriate value
 */

int get_endianness(void)
{
	int i;

	i = 2;

	if (i & 1)
	{
		return (0);
	}

	return (1);
}
