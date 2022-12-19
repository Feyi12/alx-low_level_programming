#include "main.h"
/**
 *  _strlen - af function that return a length of string
 *  @s: character input
 *  Return: length of input string
 */

int _strlen(char *s)
{
	int i = 1, len = 0;
	char s1 = s[0];

	while (s1 != '\0')
	{
		len++;
		s1 = s[++];
	}
	return (len);
}
