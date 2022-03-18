#include "main.h"
/**
 * print_line - draws a straight line in the terminal 
 *
 * @n: the number of times to print a line
 */
void print_numbers(int n)
{      	
	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
}
