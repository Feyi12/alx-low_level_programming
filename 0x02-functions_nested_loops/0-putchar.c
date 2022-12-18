#include "main.h"
/**
 * main - print -putchar
 * is written by Feye
 * Return: 0
 */
int main(void)
{
	char c[8] = "_putchar";
	
	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
