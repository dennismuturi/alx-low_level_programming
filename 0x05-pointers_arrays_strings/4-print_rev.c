#include "main.h"
/**
 * print_rev - function prints a string in reverse, followed by a newline
 * @s: a string
 */
void print_rev(char *s)
{

	int l = _strlen(s);

	for (; s[l]; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
