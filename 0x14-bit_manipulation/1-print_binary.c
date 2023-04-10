#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - Prints the binary representation of a number
  * @n: The number to representing in binary
  *
  * Return: Always 0
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide_by2(n);
}

/**
  * _divide_by2 - Calculates the binary representation of a number
  * @n: The number to be respresented in binary
  *
  * Return: Always 0
  */
void _divide_by2(unsigned long int n)
{
	if (n < 1)
		return;

	_divide_by2(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
