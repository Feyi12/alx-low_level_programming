#include "main.h"                                                                                                                                                                               
/**                                                                                                                                                                                            
 * print_alphabet_x10 - alphabet in lowercase letter that 10x                                                                                                                                
 * description: print lowercase alphabet                                                                                                                                                        
 *
 * Return: Always 0                                                                                                                                                                              */

void print_alphabet_x10(void)
{
	int count = 0;
	char lletter;
	while (count++ <= 9)
	{
		for (lletter = 'a'; lletter <= 'z'; lletter++)
		{
			_putchar(lletter);
		}
		_putchar('\n');
	}
}
