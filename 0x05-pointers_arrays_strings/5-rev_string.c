#include "main.h"
/**
 * rev_string - a function that reverse string
 *
 * @s: string input
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}

