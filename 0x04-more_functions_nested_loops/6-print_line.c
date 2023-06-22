#include "main.h"

/**
 * print_line -  function that draws a straight line
 *
 * @n: the number of times
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}