#include "main.h"
/**
 * print_rev - function prints a string in reverse, followed by a newline
 * @s: a string
 */
void print_rev(char *s)
{

	int i = 0;
	int l;
	char rev;

	while (s[i] != '\0')
	{
		i++;
	}
	for (l = i; l >= 0; l--)
	{
		rev = s[l];
		_putchar(rev);
	}
	_putchar('\n');
}
