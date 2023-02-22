#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @a: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
