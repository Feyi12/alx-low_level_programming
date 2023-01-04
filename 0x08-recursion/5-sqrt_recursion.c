#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @x: number equal to n
 * @y: number that iterates from 1 to n
 * Return: Always 0
 */
int sqrt2(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (sqrt2(x, y + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: an integer
 * Return: Always (success)
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
