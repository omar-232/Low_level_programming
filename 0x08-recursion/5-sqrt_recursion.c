#include "main.h"

/**
 * _sqrt_recursion_checker - function that check the sqr_recurion
 *
 * @n: imteger num
 * @start: start number
 * @end: end number
 *
 * Return: integer
*/

int _sqrt_recursion_checker(int n, int start, int end)
{
	long m;
	long sqr;

	if (start > end)
	{
		return (-1);
	}

	m = start + (end - start) / 2;
	sqr = m * m;

	if (sqr == n)
	{
		return (m);
	}
	else if (sqr < n)
	{
		return (_sqrt_recursion_checker(n, m + 1, end));
	}
	else
	{
		return (_sqrt_recursion_checker(n, start, m - 1));
	}
}
/**
 * _sqrt_recursion - func that returns the natural sqr root of a num
 *
 * @n: imteger num
 *
 * Return: integer
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_checker(n, 0, n));
}
