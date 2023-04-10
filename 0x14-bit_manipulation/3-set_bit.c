#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - Sets the value of a bit to 1 at a given index
  * @n: The long int to modify at a given index
  * @index: The index in the unsigned int to modify
  *
  * Return: 1 if it works, or -1 if there is an error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}

	return (-1);
}
