#include "main.h"
/**
 * print_diagonal - prints backslashes
 *@n: the number of times to draw the line
 * Return: Always 0 but currently empty
 */

void print_diagonal(int n)
{
	int x;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
