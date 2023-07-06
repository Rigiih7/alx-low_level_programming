#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to converts
  *
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lenn = 0, c = 0, sum = 0;

	if (b == NULL)
		return (0);

	lenn = _strlen(b);
	while (lenn--)
	{
		if (b[lenn] != 48 && b[lenn] != 49)
			return (0);

		if (b[lenn] == 49)
			sum += 1 << c;

		c++;
	}

	return (sum);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
