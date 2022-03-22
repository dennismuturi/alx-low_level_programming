#include "main.h"
/**
 * print_rev - function prints a string in reverse, followed by a newline
 * @s: a string
 */
void print_rev(char *s)
{

	int l;
	char rev;

	for (l = _strlen(s) - 1; l >= 0; l--)
	{
		rev = s[l];
		_putchar(rev);
	}
	_putchar('\n');
}
