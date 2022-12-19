#include "main.h"
/**
 * swap_int - a function that swaps
 * the values of two integers
 * @a:input a
 * @b:input b
 * Return: two integers(a and b)
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
