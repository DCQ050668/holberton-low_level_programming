#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int pos;

	if (n > 0)
	{
		for (pos = 0; pos < n; pos++)
			_putchar('_');
	}

	_putchar('\n');
}
