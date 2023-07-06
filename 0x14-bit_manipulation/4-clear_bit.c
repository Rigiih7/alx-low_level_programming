#include "main.h"

/**
  * clear_bit - Sets the value of a bit to 0 at a given index
  * @n: The number to modify
  * @index: The index in the number to modify
  *
  * Return: 1 if it works, or -1 if there is an error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~(1 << index));
		return (1);
	}

	return (-1);
}
