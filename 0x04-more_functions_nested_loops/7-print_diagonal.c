#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}

		_puthar(92);

		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
