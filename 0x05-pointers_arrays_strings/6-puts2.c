#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be printed
  *
  * Return: void
  */
void puts2(char *str)
{
	int q;
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}

	for (q = 0; q < p; q += 2)
	{
		_putchar(str[q]);
	}

	_putchar('\n');
}
