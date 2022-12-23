#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: content of array
 * @n: elements of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, fen;

	for (i = 0; i < n; i++)
	{
		n--;
		fen = a[i];
		a[i] = a[n];
		a[n] = fen;
	}

}
